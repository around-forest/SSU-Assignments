#include <stdio.h>
#include <stdlib.h>
#include "type.h"

char *opcode_name[] = {
  "OP_NULL",
  "OP_LOD",
  "OP_LDX",
  "OP_LDXB",
  "OP_LDA",
  "OP_LITI",
  "OP_STO",
  "OP_STOB",
  "OP_STX",
  "OP_STXB",
  "OP_SUBI",
  "OP_SUBF",
  "OP_DIVI",
  "OP_DIVF",
  "OP_ADDI",
  "OP_ADDF",
  "OP_OFFSET",
  "OP_MULI",
  "OP_MULF",
  "OP_MOD",
  "OP_LSSI",
  "OP_LSSF",
  "OP_GTRI",
  "OP_GTRF",
  "OP_LEQI",
  "OP_LEQF",
  "OP_GEQI",
  "OP_GEQF",
  "OP_NEQI",
  "OP_NEQF",
  "OP_EQLI",
  "OP_EQLF",
  "OP_NOT",
  "OP_OR",
  "OP_AND",
  "OP_CVTI",
  "OP_CVTF",
  "OP_JPC",
  "OP_JPCR",
  "OP_JMP",
  "OP_JPT",
  "OP_JPTR",
  "OP_INT",
  "OP_INCI",
  "OP_INCF",
  "OP_DECI",
  "OP_DECF",
  "OP_SUP",
  "OP_CAL",
  "OP_ADDR",
  "OP_RET",
  "OP_MINUSI",
  "OP_MINUSF",
  "OP_CHK",
  "OP_LDI",
  "OP_LDIB",
  "OP_SWITCH",
  "OP_SWVALUE",
  "OP_SWDEFAULT",
  "OP_SWLABEL",
  "OP_SWEND",
  "OP_POP",
  "OP_POPB"};

int label_no = 0;
int gen_err = 0;
FILE *fout;
extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;
extern A_LITERAL literal_table[];
extern int literal_no;

void code_generation(A_NODE *node)
{
	gen_program(node);
	gen_literal_table();
}
void gen_literal_table()
{
	int i;
	for(i=1;i<=literal_no;i++){
		fprintf(fout, ".literal %5d ",literal_table[i].addr);
		if(literal_table[i].type==int_type)
			fprintf(fout,"%d\n",literal_table[i].value.i);
		else if(literal_table[i].type==float_type)
			fprintf(fout,"%f\n",literal_table[i].value.f);
		else if(literal_table[i].type==char_type)
			fprintf(fout,"%d\n",literal_table[i].value.c);
		else if(literal_table[i].type==string_type)
			fprintf(fout,"%s\n",literal_table[i].value.s);
	}
}
void gen_program(A_NODE *node)
{
	switch(node->name) {
		case N_PROGRAM :
			gen_code_i(OP_INT,0,node->value);
			gen_code_s(OP_SUP,0,"main");
			gen_code_i(OP_RET,0,0);
			gen_declaration_list(node->clink);
			break;
		default :
			gen_error(100,node->line,NULL);
			break;
	}
}
void gen_expression(A_NODE *node)
{
	A_ID *id;
	A_TYPE *t;
	int i, ll;
	switch(node->name){
		case N_EXP_IDENT :
			id=node->clink;
			t=id->type;
			switch(t->kind){
				case ID_VAR :
				case ID_PARM :
					switch(t->kind){
						case T_ENUM :
						case T_POINTER :
							gen_code_i(OP_LOD, id->level,id->address);
							break;
						case T_ARRAY :
							if(id->kind == ID_VAR)
								gen_code_i(OP_LDA,id->level,id->address);
							else
								gen_code_i(OP_LOD,id->level,id->address);
							break;
						case T_STRUCT :
						case T_UNION :
							gen_code_i(OP_LDA,id->level,id->address);
							i=id->type->size;
							gen_code_i(OP_LDI,0,i%4?i/4+1:i/4);
							break;
						default :
							gen_error(11,id->line,NULL);
							break;
					}
					break;
				case ID_ENUM_LITERAL :
					gen_code_i(OP_LITI,0,id->init);
					break;
				default :
					gen_error(11,node->line,NULL);
					break;
			}
			break;
		case N_EXP_INT_CONST :
			gen_code_i(OP_LITI,0,node->clink);
			break;
		case N_EXP_FLOAT_CONST :
			i=node->clink;
			gen_code_i(OP_LOD,0,literal_table[i].addr);
			break;
		case N_EXP_CHAR_CONST :
			gen_code_i(OP_LITI,0,node->clink);
			break;
		case N_EXP_STRING_LITERAL :
			i=node->clink;
			gen_code_i(OP_LDA,0,literal_table[i].addr);
			break;
		case N_EXP_ARRAY :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			//gen_code_i(OP_CHK,0,node->llink->type->expr);
			if(node->type->size>1){
				gen_code_i(OP_LITI,0,node->type->size);
				gen_code_i(OP_MULI,0,0);
			}
			gen_code_i(OP_OFFSET,0,0);
			if(!isArrayType(node->type)){
					i=node->type->size;
					if(i==1)
						gen_code_i(OP_LDIB,0,0);
					else
						gen_code_i(OP_LDI,0,i%4?i/4+1:i/4);
			}
			break;
		case N_EXP_FUNCTION_CALL :
			t=node->llink->type;
			i=t->element_type->element_type->size;
			if(i%4) i=i/4*4+4;
			if(node->rlink){
				gen_code_i(OP_INT,0,12+i);
				gen_arg_expression(node->rlink);
				gen_code_i(OP_POP,0,node->rlink->value/4+3);}
			else
				gen_code_i(OP_INT,0,i);
			gen_expression(node->llink);
			gen_code_i(OP_CAL,0,0);
			break;
		case N_EXP_STRUCT :
			gen_expression_left(node->llink);
			id=node->rlink;
			if(id->address>0){
				gen_code_i(OP_LITI,0,id->address);
				gen_code_i(OP_OFFSET,0,0);}
			if(!isArrayType(node->type)){
				i=node->type->size;
				if(i==1)
					gen_code_i(OP_LDIB,0,0);
				else
					gen_code_i(OP_LDI,0,i%4?i/4+1:i/4);}
			break;
		case N_EXP_ARROW :
			gen_expression(node->llink);
			id=node->rlink;
			if(id->address>0){
				gen_code_i(OP_LITI,0,id->address);
				gen_code_i(OP_OFFSET,0,0);}
			if(!isArrayType(node->type)){
				i=node->type->size;
				if(i==1)
					gen_code_i(OP_LDIB,0,0);
				else
					gen_code_i(OP_LDI,0,i%4?i/4+1:i/4);}
			break;
		case N_EXP_POST_INC :
			gen_expression(node->clink);
			gen_expression_left(node->clink);
			t=node->type;
			if(node->type->size==1)
				gen_code_i(OP_LDXB,0,0);
			else
				gen_code_i(OP_LDX,0,1);
			if(isPointerOrArrayType(node->type)){
				gen_code_i(OP_LITI,0,node->type->element_type->size);
				gen_code_i(OP_ADDI,0,0);}
			else if(isFloatType(node->type))
				gen_code_i(OP_INCF,0,0);
			else
				gen_code_i(OP_INCI,0,0);
			if(node->type->size==1)
				gen_code_i(OP_STOB,0,0);
			else
				gen_code_i(OP_STO,0,1);
			break;
		case N_EXP_POST_DEC :
			gen_expression(node->clink);
      gen_expression_left(node->clink);
      t=node->type;
      if(node->type->size==1)
        gen_code_i(OP_LDXB,0,0);
      else
        gen_code_i(OP_LDX,0,1);
      if(isPointerOrArrayType(node->type)){
        gen_code_i(OP_LITI,0,node->type->element_type->size);
        gen_code_i(OP_SUBI,0,0);}
      else if(isFloatType(node->type))
        gen_code_i(OP_DECF,0,0);
      else
        gen_code_i(OP_DECI,0,0);
      if(node->type->size==1)
        gen_code_i(OP_STOB,0,0);
      else
        gen_code_i(OP_STO,0,1);
      break;
		case N_EXP_PRE_INC :
      gen_expression_left(node->clink);
      t=node->type;
      if(node->type->size==1)
        gen_code_i(OP_LDXB,0,0);
      else
        gen_code_i(OP_LDX,0,1);
      if(isPointerOrArrayType(node->type)){
        gen_code_i(OP_LITI,0,node->type->element_type->size);
        gen_code_i(OP_ADDI,0,0);}
      else if(isFloatType(node->type))
        gen_code_i(OP_INCF,0,0);
      else
        gen_code_i(OP_INCI,0,0);
      if(node->type->size==1)
        gen_code_i(OP_STXB,0,0);
      else
        gen_code_i(OP_STX,0,1);
      break;
		case N_EXP_PRE_DEC :
			gen_expression_left(node->clink);
      t=node->type;
      if(node->type->size==1)
        gen_code_i(OP_LDXB,0,0);
      else
        gen_code_i(OP_LDX,0,1);
      if(isPointerOrArrayType(node->type)){
        gen_code_i(OP_LITI,0,node->type->element_type->size);
        gen_code_i(OP_SUBI,0,0);}
      else if(isFloatType(node->type))
        gen_code_i(OP_DECF,0,0);
      else
        gen_code_i(OP_DECI,0,0);
      if(node->type->size==1)
        gen_code_i(OP_STXB,0,0);
      else
        gen_code_i(OP_STX,0,1);
      break;
		case N_EXP_NOT :
			gen_expression(node->clink);
			gen_code_i(OP_NOT,0,0);
			break;
		case N_EXP_PLUS :
			gen_expression(node->clink);
			break;
		case N_EXP_MINUS :
			gen_expression(node->clink);
			if(isFloatType(node->type))
				gen_code_i(OP_MINUSF,0,0);
			else
				gen_code_i(OP_MINUSI,0,0);
			break;
		case N_EXP_AMP :
			gen_expression_left(node->clink);
			break;
		case N_EXP_STAR :
			gen_expression(node->clink);
			i=node->type->size;
			if(i==1)
				gen_code_i(OP_LDIB,0,0);
			else
				gen_code_i(OP_LDI,0,i%4?i/4+1:i/4);
			break;
		case N_EXP_SIZE_EXP :
			gen_code_i(OP_LITI,0,node->clink);
			break;
		case N_EXP_SIZE_TYPE :
			gen_code_i(OP_LITI,0,node->clink);
			break;
		case N_EXP_CAST :
			gen_expression(node->rlink);
			if(node->type!=node->rlink->type)
				if(isFloatType(node->type))
					gen_code_i(OP_CVTF,0,0);
				else if(isFloatType(node->rlink->type))
					gen_code_i(OP_CVTI,0,0);
			break;
		case N_EXP_MUL :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->type))
				gen_code_i(OP_MULF,0,0);
			else
				gen_code_i(OP_MULI,0,0);
			break;
		case N_EXP_DIV :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->type))
				gen_code_i(OP_DIVF,0,0);
			else
				gen_code_i(OP_DIVI,0,0);
			break;
		case N_EXP_MOD :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			gen_code_i(OP_MOD,0,0);
			break;
		case N_EXP_ADD :
			gen_expression(node->llink);
			if(isPointerOrArrayType(node->rlink->type)){
				gen_code_i(OP_LITI,0,node->rlink->type->element_type->size);
				gen_code_i(OP_MULI,0,0);}
			gen_expression(node->rlink);
			if(isPointerOrArrayType(node->llink->type)){
				gen_code_i(OP_LITI,0,node->llink->type->element_type->size);
				gen_code_i(OP_MULI,0,0);}
			if(isFloatType(node->type))
				gen_code_i(OP_ADDF,0,0);
			else
				gen_code_i(OP_ADDI,0,0);
			break;
		case N_EXP_SUB :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isPointerOrArrayType(node->llink->type)&&
					!isPointerOrArrayType(node->rlink->type)){
				gen_code_i(OP_LITI,0,node->llink->type->element_type->size);
				gen_code_i(OP_MULI,0,0);}
			if(isFloatType(node->type))
				gen_code_i(OP_SUBF,0,0);
			else
				gen_code_i(OP_SUBI,0,0);
			break;
		case N_EXP_LSS :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->llink->type))
				gen_code_i(OP_LSSF,0,0);
			else
				gen_code_i(OP_LSSI,0,0);
			break;
		case N_EXP_GTR :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->llink->type))
				gen_code_i(OP_GTRF,0,0);
			else
				gen_code_i(OP_GTRI,0,0);
			break;
		case N_EXP_LEQ :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->llink->type))
				gen_code_i(OP_LEQF,0,0);
			else
				gen_code_i(OP_LEQI,0,0);
			break;
		case N_EXP_GEQ :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->llink->type))
				gen_code_i(OP_GEQF,0,0);
			else
				gen_code_i(OP_GEQI,0,0);
			break;
		case N_EXP_NEQ :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->llink->type))
				gen_code_i(OP_NEQF,0,0);
			else
				gen_code_i(OP_NEQI,0,0);
			break;
		case N_EXP_EQL :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			if(isFloatType(node->llink->type))
				gen_code_i(OP_EQLF,0,0);
			else
				gen_code_i(OP_EQLI,0,0);
			break;
		case N_EXP_AND :
			gen_expression(node->llink);
			gen_code_l(OP_JPCR,0,i=get_label());
			gen_expression(node->rlink);
			gen_label_number(i);
			break;
		case N_EXP_OR :
			gen_expression(node->llink);
			gen_code_l(OP_JPTR,0,i=get_label());
			gen_expression(node->rlink);
			gen_label_number(i);
			break;
		case N_EXP_ASSIGN :
			gen_expression_left(node->llink);
			gen_expression(node->rlink);
			i=node->type->size;
			if(i==1)
				gen_code_i(OP_STXB,0,0);
			else
				gen_code_i(OP_STX,0,i%4?i/4+1:i/4);
			break;
		default :
			gen_error(100,node->line, NULL);
			break;
	}
}
void gen_expression_left(A_NODE *node)
{
	A_ID *id;
	A_TYPE *t;
	int result;
	switch(node->name){
		case N_EXP_IDENT :
			id=node->clink;
			t=id->type;
			switch(id->kind){
				case ID_VAR :
				case ID_PARM :
					switch(t->kind){
						case T_ENUM :
						case T_POINTER :
						case T_STRUCT :
						case T_UNION :
							gen_code_i(OP_LDA,id->level,id->address);
							break;
						case T_ARRAY :
							if(id->kind==ID_VAR)
								gen_code_i(OP_LDA,id->level,id->address);
							else
								gen_code_i(OP_LOD,id->level,id->address);
							break;
						default :
							gen_error(13,node->line,id->name);
							break;
					}
					break;
				case ID_FUNC :
					gen_code_s(OP_ADDR,0,id->name);
					break;
				default :
					gen_error(13,node->line,id->name);
					break;
			}
			break;
		case N_EXP_ARRAY :
			gen_expression(node->llink);
			gen_expression(node->rlink);
			//gen_code_i(OP_CHK,0,node->llink->type->expr);
			if(node->type->size>1){
				gen_code_i(OP_LITI,0,node->type->size);
				gen_code_i(OP_MULI,0,0);}
			gen_code_i(OP_OFFSET,0,0);
			break;
		case N_EXP_STRUCT :
			gen_expression_left(node->llink);
			id=node->rlink;
			if(id->address>0){
				gen_code_i(OP_LITI,0,id->address);
				gen_code_i(OP_OFFSET,0,0);}
			break;
		case N_EXP_ARROW :
			gen_expression(node->llink);
			id=node->rlink;
			if(id->address>0){
				gen_code_i(OP_LITI,0,id->address);
				gen_code_i(OP_OFFSET,0,0);}
			break;
		case N_EXP_STAR :
			gen_expression(node->clink);
			break;
		case N_EXP_INT_CONST :
		case N_EXP_FLOAT_CONST :
		case N_EXP_CHAR_CONST :
		case N_EXP_STRING_LITERAL :
		case N_EXP_FUNCTION_CALL :
		case N_EXP_POST_INC :
		case N_EXP_POST_DEC :
		case N_EXP_PRE_INC :
		case N_EXP_PRE_DEC :
		case N_EXP_NOT :
		case N_EXP_MINUS :
		case N_EXP_SIZE_EXP :
		case N_EXP_SIZE_TYPE :
		case N_EXP_CAST :
		case N_EXP_MUL :
		case N_EXP_DIV :
		case N_EXP_MOD :
		case N_EXP_ADD :
		case N_EXP_SUB :
		case N_EXP_LSS :
		case N_EXP_GTR :
		case N_EXP_LEQ :
		case N_EXP_GEQ :
		case N_EXP_NEQ :
		case N_EXP_EQL :
		case N_EXP_AMP :
		case N_EXP_AND :
		case N_EXP_OR :
		case N_EXP_ASSIGN :
			gen_error(12,node->line,NULL);
			break;
		default :
			gen_error(100,node->line,NULL);
			break;
	}
}
void gen_arg_expression(A_NODE *node)
{
	A_NODE *n;
	switch(node->name){
		case N_ARG_LIST :
			gen_expression(node->llink);
			gen_arg_expression(node->rlink);
			break;
		case N_ARG_LIST_NIL :
			break;
		default :
			gen_error(100,node->line,NULL);
			break;
	}
}
int get_label()
{
	label_no++;
	return (label_no);
}
void gen_statement(A_NODE *node, int cont_label, int break_label, A_SWITCH sw[], int *sn)
{
	A_SWITCH switch_table[100];
	int switch_no=0;
	A_NODE *n;
	int i,l1,l2,l3;
	switch(node->name){
		case N_STMT_LABEL_CASE :
			if(sw){
				*sn=*sn+1;
				sw[*sn].kind=SW_VALUE;
				sw[*sn].val=node->llink;
				sw[*sn].label=l1=get_label();
				gen_label_number(l1);}
			else
				gen_error(21,node->line,NULL);
			gen_statement(node->rlink,cont_label,break_label,sw,sn);
			break;
		case N_STMT_LABEL_DEFAULT :
			if(sw){
				*sn=*sn+1;
				sw[*sn].kind=SW_DEFAULT;
				sw[*sn].label=l1=get_label();
				gen_label_number(l1);}
			else
				gen_error(20,node->line,NULL);
			gen_statement(node->clink,cont_label,break_label,sw,sn);
			break;
		case N_STMT_COMPOUND :
			if(node->llink) gen_declaration_list(node->llink);
			gen_statement_list(node->rlink,cont_label,break_label,sw,sn);
			break;
		case N_STMT_EMPTY :
			break;
		case N_STMT_EXPRESSION :
			n=node->clink;
			gen_expression(n);
			i=n->type->size;
			if(i)
				gen_code_i(OP_POP,0,i%4?i/4+1:i/4);
			break;
		case N_STMT_IF :
			gen_expression(node->llink);
			gen_code_l(OP_JPC,0,l1=get_label());
			gen_statement(node->rlink,cont_label,break_label,0,0);
			gen_label_number(l1);
			break;
		case N_STMT_IF_ELSE :
			gen_expression(node->llink);
			gen_code_l(OP_JPC,0,l1=get_label());
			gen_statement(node->clink,cont_label,break_label,0,0);
			gen_code_l(OP_JMP,0,l2=get_label());
			gen_label_number(l1);
			gen_statement(node->rlink,cont_label,break_label,0,0);
			gen_label_number(l2);
			break;
		case N_STMT_SWITCH :
			gen_expression(node->llink);
			gen_code_l(OP_SWITCH,0,l1=get_label());
			gen_code_l(OP_JMP,0,l2=get_label());
			gen_statement(node->rlink,cont_label,l2,switch_table,&switch_no);
			gen_label_number(l1);
			for(i=1;i<=switch_no;i++){
				if(switch_table[i].kind==SW_VALUE)
					gen_code_i(OP_SWVALUE,0,switch_table[i].val);
				else
					gen_code_i(OP_SWDEFAULT,0,0);
				gen_code_l(OP_SWLABEL,0,switch_table[i].label);}
			gen_code_i(OP_SWEND,0,0);
			gen_label_number(l2);
			break;
		case N_STMT_WHILE :
			l3=get_label();
			gen_label_number(l1=get_label());
			gen_expression(node->llink);
			gen_code_l(OP_JPC,0,l2=get_label());
			gen_statement(node->rlink,l3,l2,0,0);
			gen_label_number(l3);
			gen_code_l(OP_JMP,0,l1);
			gen_label_number(l2);
			break;
		case N_STMT_DO :
			l3=get_label();
			l2=get_label();
			gen_label_number(l1=get_label());
			gen_statement(node->llink,l2,l3,0,0);
			gen_label_number(l2);
			gen_expression(node->rlink);
			gen_code_l(OP_JPT,0,l1);
			gen_label_number(l3);
			break;
		case N_STMT_FOR :
			n=node->llink;
			l3=get_label();
			if(n->llink){
				gen_expression(n->llink);
				i=n->llink->type->size;
				if(i)
					gen_code_i(OP_POP,0,i%4?i/4+1:i/4);}
			gen_label_number(l1=get_label());
			l2=get_label();
			if(n->clink){
				gen_expression(n->clink);
				gen_code_l(OP_JPC,0,l2);}
			gen_statement(node->rlink,l3,l2,0,0);
			gen_label_number(l3);
			if(n->rlink){
				gen_expression(n->rlink);
				i=n->rlink->type->size;
				if(i)
					gen_code_i(OP_POP,0,i%4?i/4+1:i/4);}
			gen_code_l(OP_JMP,0,l1);
			gen_label_number(l2);
			break;
		case N_STMT_CONTINUE :
			if(cont_label)
				gen_code_l(OP_JMP,0,cont_label);
			else
				gen_error(22,node->line,NULL);
			break;
		case N_STMT_BREAK :
			if(break_label)
				gen_code_l(OP_JMP,0,break_label);
			else
				gen_error(23,node->line,NULL);
			break;
		case N_STMT_RETURN :
			n=node->clink;
			if(n){
				i=n->type->size;
				if(i%4) i=i/4*4+4;
				gen_code_i(OP_LDA,1,-i);
				gen_expression(n);
				gen_code_i(OP_STO,0,i/4);}
			gen_code_i(OP_RET,0,0);
			break;
		default :
			gen_error(100,node->line,NULL);
			break;
	}
}
void gen_statement_list(A_NODE *node, int cont_label, int break_label, A_SWITCH sw[], int *sn)
{
	switch(node->name){
		case N_STMT_LIST :
			gen_statement(node->llink,cont_label,break_label,sw,sn);
			gen_statement_list(node->rlink,cont_label,break_label,sw,sn);
			break;
		case N_STMT_LIST_NIL :
			break;
		default :
			gen_error(100,node->line,NULL);
			break;
	}
}
void gen_initializer_global(A_NODE *node, A_TYPE *t, int addr)
{
}
void gen_initializer_local(A_NODE *node, A_TYPE *t, int addr)
{
}
void gen_declaration_list(A_ID *id)
{
	while(id){
		gen_declaration(id);
		id=id->link;
	}
}
void gen_declaration(A_ID *id)
{
	int i;
	A_NODE *node;
	switch(id->kind){
		case ID_VAR :
			if(id->init)
				if(id->level==0)
					gen_initializer_global(id->init,id->type,id->address);
				else
					gen_initializer_local(id->init,id->type,id->address);
			break;
		case ID_FUNC :
			if(id->type->expr){
				gen_label_name(id->name);
				gen_code_i(OP_INT,0,id->type->local_var_size);
				gen_statement(id->type->expr,0,0,0,0);
				gen_code_i(OP_RET,0,0);}
			break;
		case ID_PARM :
		case ID_TYPE :
		case ID_ENUM :
		case ID_STRUCT :
		case ID_FIELD :
		case ID_ENUM_LITERAL :
		case ID_NULL :
			break;
		default :
			gen_error(100,id->line,NULL);
			break;
	}
}
void gen_error(int i, int ll, char *s)
{
	gen_err++;
	printf("*** error at line %d: ", ll);
	switch(i){
		case 11: printf("illegal identifier in expression \n");
						 break;
		case 12: printf("illegal l-value expression \n");
						 break;
		case 13: printf("identifier %s not l-value expression \n", s);
						 break;
		case 20: printf("illegal default label in switch statement \n");
						 break;
		case 21: printf("illegal case label in switch statement \n");
						 break;
		case 22: printf("no destination for continue statement \n");
						 break;
		case 23: printf("no destination for break statement \n");
						 break;
		case 100: printf("fatal compiler error during code generation \n");
							break;
		default : printf("unknown \n");
							break;
	}
}
void gen_code_i(OPCODE op, int l, int a)
{
	fprintf(fout,"\t%9s  %d, %d\n", opcode_name[op],l,a);
}
void gen_code_f(OPCODE op, int l, float a)
{
	fprintf(fout,"\t%9s  %d, %f\n", opcode_name[op],l,a);
}
void gen_code_s(OPCODE op, int l, char *a)
{
	fprintf(fout,"\t%9s  %d, %s\n", opcode_name[op],l,a);
}
void gen_code_l(OPCODE op, int l, int a)
{
	fprintf(fout,"\t%9s  %d, L%d\n", opcode_name[op],l,a);
}
void gen_label_number(int i)
{
	fprintf(fout,"L%d:\n",i);
}
void gen_label_name(char *s)
{
	fprintf(fout,"%s:\n",s);
}
