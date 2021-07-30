/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemes-b <glemes-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:50:10 by mamontei          #+#    #+#             */
/*   Updated: 2021/07/27 00:13:59 by glemes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{	
		j = i;
		while (j < size)
		{
			if (tab[i] >= tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}

	int    main(void)
{
    int    tab[] = {4, 3, 5, 4, 2, 5, 1, 8, 2};
    int    size = 9;
    int    i = 0;
    i = 0;
    while (i < size){
        printf("%d, ", tab[i]);
        i++;
    }
        printf("\n");
    ft_sort_int_tab(tab, size);
    i = 0;
    while (i < size){
        printf("%d, ", tab[i]);
        i++;
    }
        printf("\n");
    return (0);
}