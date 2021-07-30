#include <unistd.h>
void	ft_print_reverse(void)
{
	char	alpha_reverse;

	alpha_reverse = 'z';
	while (alpha_reverse >= 'a')
	{
		write(1, &alpha_reverse, 1);
		alpha_reverse--;
	}
}
