typedef struct a {
	int b;
	int c;
} x;

typedef enum tt {
	A,
	B,
	C
} TT;

int main() {
	int i = 0;
	int *j;

	i++;

	while(1){
		if(i == 15)
			break;
		else
			i++;
	}

	return 0;
}
