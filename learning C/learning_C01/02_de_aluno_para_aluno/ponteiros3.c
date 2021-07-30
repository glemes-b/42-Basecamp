#include <stdio.h>

int main(void)
{
	int x = 10;
	int *px;

	*px = x;

	printf("valor de x eh %i, e ponteiro é %d\n", *px, px);

	return (0);
}
