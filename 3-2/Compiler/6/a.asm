	   OP_INT  0, 12
	   OP_SUP  0, main
	   OP_RET  0, 0
multiply:
	   OP_INT  0, 20
	   OP_LDA  1, 16
	  OP_LITI  0, 0
	   OP_STX  0, 1
	   OP_POP  0, 1
L2:
	   OP_LOD  1, 12
	   OP_JPC  0, L3
	   OP_LOD  1, 12
	  OP_LITI  0, 2
	   OP_MOD  0, 0
	   OP_JPC  0, L4
	   OP_LDA  1, 16
	   OP_LOD  1, 16
	   OP_LOD  1, 0
	  OP_ADDI  0, 0
	   OP_STX  0, 1
	   OP_POP  0, 1
L4:
	   OP_LDA  1, 12
	   OP_LOD  1, 12
	  OP_LITI  0, 2
	  OP_DIVI  0, 0
	   OP_STX  0, 1
	   OP_POP  0, 1
	   OP_LDA  1, 0
	   OP_LOD  1, 0
	  OP_LITI  0, 2
	  OP_MULI  0, 0
	   OP_STX  0, 1
	   OP_POP  0, 1
L1:
	   OP_JMP  0, L2
L3:
	   OP_LDA  1, -4
	   OP_LOD  1, 16
	   OP_STO  0, 1
	   OP_RET  0, 0
	   OP_RET  0, 0
main:
	   OP_INT  0, 16
	   OP_LDA  1, 12
	   OP_INT  0, 16
	  OP_LITI  0, 120
	  OP_LITI  0, 3
	   OP_POP  0, 5
	  OP_ADDR  0, multiply
	   OP_CAL  0, 0
	   OP_STX  0, 1
	   OP_POP  0, 1
	   OP_INT  0, 12
	   OP_LOD  1, 12
	   OP_POP  0, 4
	  OP_ADDR  0, printf
	   OP_CAL  0, 0
	   OP_RET  0, 0
