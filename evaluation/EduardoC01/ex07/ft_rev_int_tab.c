#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;

	count = 0;
	while (size > size / 2)
	{
		aux = tab[--size];
		tab[size] = tab[count];
		tab[count++] = aux;
	}
}
