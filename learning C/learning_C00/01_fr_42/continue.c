#include <stdio.h>

int main()

{
	int i;

	for (i=0; i<10; i++)
	{
	printf("%d\n", i);
	continue; //aqui pertmite voltar ao topo do último loop *diferente do while ele acrecenta i++
	printf("Never Ever\n");
	}

	printf("I am out\n");

}
