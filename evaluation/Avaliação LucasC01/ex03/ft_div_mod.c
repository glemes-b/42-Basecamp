void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int    main(void)
{
    int    a;
    int    b;
    int    div;
    int    mod;

    a = 42;
    b = 10;

    printf("a: %d | b: %d\n", a, b);
    ft_div_mod(a, b, &div, &mod);
    printf("div: %p: %d\nmod: %p: %d\n", 
            &div, div, &mod, mod);
}