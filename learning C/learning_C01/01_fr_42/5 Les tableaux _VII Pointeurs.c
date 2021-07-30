#include <stdio.h>
 
 int main(void)
 {
	int tab[3];
	int *tab2[2];

	tab[2] = 145; /*tab[2] == *(tab + 2)*/
	tab2[1] = tab; /*tab2[1] == *(tab2 +1)*/
	/*tab2[1][2] = 18; /* tab2[1][2] == *(tab2[1] +2)*/
	/**(tab2[1] + 2) = 18;*/
	*(*(tab2 + 1) + 2) = 18;
	printf("%d\n", *(tab + 2));
	
	 /*tab[1] = 145;
	 printf("%d\n", *(tab + 1)); */ /*ou seja podemos troca tab[n] == *(tab + n)*/

	 /*tab[0] = 478;
	 printf("%d\n", *tab);*/ //aqui temos o valor de tab[0]
	 
	 /*ptr = tab;
	 printf("%p\n", tab);*/
	 return (0);
 }