#include <stdio.h>

void	fct(int *a)
{
	*a = *a + 42;
}

int main(void)
{
	int a;
	a = 42;

	printf("%d\n", a);
	fct(&a);
	printf("%d\n", a);
	return(0);
}