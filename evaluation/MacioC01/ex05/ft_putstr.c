#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str ++;
	}
}

int main(void)
{
	char a[] = "ola mundo";
	ft_putstr(&a[0]);
	return(0);
}
