#include <stdio.h>

int main()

{
	int numero, cifra;
	numero = 111;

	if (numero >= 0)
		{
			do
			{
				cifra = numero % 10;
				printf("%i\n", cifra);
				numero /=10;
			}
			while (numero != 0);
		}
		printf("\n");
}