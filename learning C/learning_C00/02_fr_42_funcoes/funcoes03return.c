#include <stdio.h>

float fct(int, float);

int main(void)

{
	float i;
	float x = 0.5;

	i = fct(42, 0.5);
	printf("%f\n", i);
	printf("%f\n", x);
	return(0);
}

float fct(int a, float x)

{
	x = 0.8;
	printf("Coucou 42\n");
	return(a * x);
}

