void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	min;
	int	max;

	min = 0;
	max = size - 1;
	while (min < max)
	{
		aux = tab[max];
		tab[max] = tab[min];
		tab[min] = aux;
		min++;
		max--;
	}
}
