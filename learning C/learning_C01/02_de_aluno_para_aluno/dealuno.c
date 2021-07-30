#include <stdio.h>

int main(void)

	{
	int x;
	int *ponteiro;

	ponteiro = &x;


	printf("%i\n", x);

	return(0);
	
	}

	int tab[3];
	int *tab2[2];

	tab[2] = 145;
	tab2[1] = tab;
	//tab2[1][2] = 18
	// *(tab2[1] + 2) = 18;

	printf("%d\n", tab);

	#include <stdio.h>

void fct(int *a)
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

#include <stdio.h>

void fct(int *a)
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
	return (0);
}