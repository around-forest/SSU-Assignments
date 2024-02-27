void fun(int a, int b){
	a = a + b;
	return a;
}	

int main() {
	int a = 1;
	int b = 4;
	int *c;
	int **d;
	a = fun(a, b);
	return a;
}
