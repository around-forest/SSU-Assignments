void main() {
	int k, i = 0;
	int a[5];
	a[0] = 0;
	a[1] = 1;
	a[2] = 3;
	a[3] = 5;

	for(k = 0; k < 4; k++)
		i = i + a[k];

	printf(i);
}
