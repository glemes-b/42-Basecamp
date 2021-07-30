#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	alpha_sequ;

	alpha_sequ = 'a';
	while (alpha_sequ <= 'z')
	{
		write(1, &alpha_sequ, 1);
		alpha_sequ++;
	}
}
