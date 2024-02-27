#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define BUF 1024

// Basic Syntax Token  
typedef enum { 
	NUMBER,
	PLUS, // +
	MINUS, // -
	MULTIPLY, // *
	DIVIDE, // /
	LP, // (
	RP, // )
	END, 
	UNKNOWN 
} token;

// real numb / integer token
typedef enum { 
	INT, 
	FLT 
} kind;

// structure to distinguish what type of number is
struct value {
    kind t;
    union {
        int i;
        float f;
    } val;
};

char ch = ' ';
int i_num = 0; // integer numb
int f_size = 0; // below decimal point
float f_num = 0.0; // real numb

token cur_token; // current token type
struct value val; // distinguished value

void get_token();
void error(int i);
struct value* expression();
struct value* term();
struct value* factor();

// tokenizer
void get_token() {
    if(cur_token == END) ch = ' ';
    while(ch == ' '|| ch == '\t'){
    	ch = getchar();
    	if(ch == '\n') exit(1); // exit program when \n is entered
    }
    if(isdigit(ch)){
    	f_size = 0;
    	f_num = 0.0;
    	i_num = 0;
    	cur_token = NUMBER;
    	do{
			i_num = i_num * 10 + (ch - '0'); // get integer part of the numb
    		ch = getchar();
    	}while(isdigit(ch));
    	val.t = INT;
    	val.val.i = i_num;
    	if(ch == '.'){		// distinguish numb by decimal point
    		f_num = i_num; // save integer part first
    		ch = getchar();
    		do{
    			f_size++;
    			f_num = f_num + ((ch - '0') * pow(0.1, f_size)); // get below decimal part
    			ch = getchar();
			}while(isdigit(ch));
			val.t = FLT;
			val.val.f = f_num;
		}
	}
	else if(ch == '+'){
		cur_token = PLUS;
		ch = getchar();
	}
	else if(ch == '-'){
		cur_token = MINUS;
		ch = getchar();
	}
	else if(ch == '*'){
		cur_token = MULTIPLY;
		ch = getchar();
	}
	else if(ch == '/'){
		cur_token = DIVIDE;
		ch = getchar();
	}
	else if(ch == '('){
		cur_token = LP;
		ch = getchar();
	}
	else if(ch == ')'){
		cur_token = RP;
		ch = getchar();
	}
	else if(ch == '\n'){
		cur_token = END;
	}
	else return error(1); // error when other words are entered
}

void error(int i) {
	switch(i){
		case 1:
    		fprintf(stderr, ">> Syntax error\n");
    		exit(1);
    	case 2:
    		fprintf(stderr, ">> Warning: Calculation of real numbers and integers\n");
    		break;
    	case 3:
    		fprintf(stderr, ">> Division by Zero\n");
    		exit(1);
	}
}

int main() {
    while (1) {
    	printf(">> "); // prompt
        get_token();
        struct value* result = expression(); // call expression
        if(cur_token != END)
        	error(1);
        else{
        	if(result->t == INT) // integer output
        		printf(">> %d\n", result->val.i);
        	else if(result->t == FLT) // real numb output
        		printf(">> %f\n", result->val.f);
		}
    }

    return 0;
}

struct value* expression() {
    struct value* result = term();
    while (cur_token == PLUS || cur_token == MINUS) {
        if (cur_token == PLUS) {
        	get_token();
        	struct value* tmp = term();
        	
            if(result->t == INT && tmp->t == INT){
            	result->val.i += tmp->val.i;
			}
			else if(result->t == INT && tmp->t == FLT){
				error(2);
				result->t = FLT;
				result->val.f = result->val.i;
				result->val.f += tmp->val.f;
			}
			else if(result->t == FLT && tmp->t == INT){
				error(2);
				result->val.f += tmp->val.i;
			}
			else if(result->t == FLT && tmp->t == FLT){
				result->val.f += tmp->val.f;
			}
			free(tmp);
        }
        else if(cur_token == MINUS){
        	get_token();
        	struct value* tmp = term();
        	
            if(result->t == INT && tmp->t == INT){
            	result->val.i -= tmp->val.i;
			}
			else if(result->t == INT && tmp->t == FLT){
				error(2);
				result->t = FLT;
				result->val.f = result->val.i;
				result->val.f -= tmp->val.f;
			}
			else if(result->t == FLT && tmp->t == INT){
				error(2);
				result->val.f -= tmp->val.i;
			}
			else if(result->t == FLT && tmp->t == FLT){
				result->val.f -= tmp->val.f;
			}
			free(tmp);
        }
    }
    return result;
}

struct value* term() {
    struct value* result = factor();
    while (cur_token == MULTIPLY || cur_token == DIVIDE) {
        if (cur_token == MULTIPLY) {
        	get_token();
        	struct value* tmp = factor();
            if(result->t == INT && tmp->t == INT){
            	result->val.i *= tmp->val.i;
			}
			else if(result->t == INT && tmp->t == FLT){
				error(2);
				result->t = FLT;
				result->val.f = result->val.i;
				result->val.f *= tmp->val.f;
			}
			else if(result->t == FLT && tmp->t == INT){
				error(2);
				result->val.f *= tmp->val.i;
			}
			else if(result->t == FLT && tmp->t == FLT){
				result->val.f *= tmp->val.f;
			}
			free(tmp);
        }
        else if(cur_token == DIVIDE){
        	get_token();
        	struct value* tmp = factor();
        	
        	if(tmp->t == INT && tmp->val.i == 0) error(3);
        	else if(tmp->t == FLT && tmp->val.f == 0.0) error(3);
        	
            if(result->t == INT && tmp->t == INT){
            	result->val.i /= tmp->val.i;
			}
			else if(result->t == INT && tmp->t == FLT){
				error(2);
				result->t = FLT;
				result->val.f = result->val.i;
				result->val.f /= tmp->val.f;
			}
			else if(result->t == FLT && tmp->t == INT){
				error(2);
				result->val.f /= tmp->val.i;
			}
			else if(result->t == FLT && tmp->t == FLT){
				result->val.f /= tmp->val.f;
			}
			free(tmp);
        }
    }
    return result;
}

struct value* factor() {
    struct value* result = (struct value*)malloc(sizeof(struct value));
    if (cur_token == NUMBER) {
        if(val.t == INT){
        	result->t = INT;
        	result->val.i = val.val.i;
		}
		else{
			result->t = FLT;
        	result->val.f = val.val.f;
		}
		get_token();
    }
    else if (cur_token == LP) {
        get_token();
        result = expression();
        if (cur_token == RP) {
            get_token();
        }
        else {
            error(1);
        }
    }
    else {
        error(1);
    }
    return result;
}

