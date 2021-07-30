#include <stdio.h>

int main ()

{
	int a[10][10];
	a[0][1] = 12;
	a[1][9] = 10;

	int b;
	b=9;

	printf("%d\n", a[1][b])
