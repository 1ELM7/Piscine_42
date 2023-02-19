/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:25:13 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/18 17:43:17 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i <= (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[9] = {1,2,3,4,5,6,7,8,9};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 9);
	while (i < 9)
	{
		printf("%d,", tab[i]);
		i++;
	}
	return (0);
}
*/
