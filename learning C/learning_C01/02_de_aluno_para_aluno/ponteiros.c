#include <stdio.h>
//nesse exercício mostra que o valor de "x" está sendo alterado
//o ponteiro recebe o endereço & de "x" e depois o valor de "y" é 
// adicionado entao ao valor do (*) ponteiro com o endereço de "x"
// o ponteiro tinha o endereco de x e assim recebe o valor de y 
int main(void)

	{
	int x;
	int *ponteiro;

	ponteiro = &x;

	int y = 20;
	*ponteiro = y;
	printf("%i%i\n", x, y);

	return(0);
	
	}