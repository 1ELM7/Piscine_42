/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 03:02:45 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/18 19:22:52 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < (size))
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[6] = {5, 10, 45, 0, -6, -45};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 6);
	while (i < 5)
	{
		printf("%d,", tab[i]);
		i++;
	}
	return 0;
}
*/
