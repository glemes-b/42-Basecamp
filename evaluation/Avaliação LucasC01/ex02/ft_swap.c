/*	temp = *a
	*a = *b
	*b = temp	*/

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

#include <stdio.h>

void    ft_swap(int *a, int *b);

int    main(void)
{
    int    a;
    int    b;

    a = 24;
    b = 42;
    printf("Before a: %p: %d | b: %p %d\n", &a, a, &b, b);
    ft_swap(&a, &b);
    printf("After  a: %p: %d | b: %p %d\n", &a, a, &b, b);
}