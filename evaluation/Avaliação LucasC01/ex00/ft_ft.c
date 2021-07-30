void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

void    ft_ft(int *nbr);

int    main(void)
{
    int    nbr;
    int    *p_nbr;

    nbr = 11;
    p_nbr = &nbr;
    printf("Before a: %p: %d\n",&nbr, nbr);
    ft_ft(p_nbr);
    printf("After  a: %p: %d\n",&nbr, nbr);
    return (0);
}