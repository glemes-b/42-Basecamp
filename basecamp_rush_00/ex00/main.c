#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush (2, 5);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_putchar(char c);
void	rush(int x, int y)
{	
	int	c;
	int	r;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == 1 && c == x))
				ft_putchar('A');
			else if ((r == y && c == 1) || (r == y && c == x))
				ft_putchar('C');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
