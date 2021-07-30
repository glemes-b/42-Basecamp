#include <stdio.h>


	int main()

{
	int i;
	int j;

	i=0;
		
	while (i<10)
	{
	
	j=0;	
	while (j<10)
	{	
	printf("%d%d\n",i,j);
	break; //aqui ele para o loop
	j++;
	
	}
	i++;
	}
	printf("I am out\n");	
	
}	
