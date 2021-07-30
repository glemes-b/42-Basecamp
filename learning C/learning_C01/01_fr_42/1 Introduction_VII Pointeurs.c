#include <stdio.h>

int main(void)

{
	int a;
	int b;
	char c;
	int *ptr;

	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr = c;
	printf("%p\n", ptr);
	return(0);
}
