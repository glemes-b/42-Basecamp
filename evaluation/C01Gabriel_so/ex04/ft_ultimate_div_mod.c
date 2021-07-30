/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemes-b <glemes-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:32:25 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/07/26 19:26:28 by glemes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	a_mem;
	int	b_mem;

	a_mem = *a;
	b_mem = *b;
	*a = a_mem / b_mem;
	*b = a_mem % b_mem;
}
