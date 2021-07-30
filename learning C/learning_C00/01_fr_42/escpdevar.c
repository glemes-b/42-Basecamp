#include <stdio.h>

int a;

int main()

{
	int a;
	a = 12;

	{
		int a;
		a = 42;
	
	}

	printf ("%d\n",a);
}
