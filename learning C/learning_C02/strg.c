#include <stdio.h>
#include <string.h>

//aprendendo string.h
//strcpy(strig_destino, string_origem)

int main (void)
{
	char nome1[15]; 
	char nome2[15];

	strcpy(nome2, nome1);
	
	printf("nome: %s\n", nome1);
}
