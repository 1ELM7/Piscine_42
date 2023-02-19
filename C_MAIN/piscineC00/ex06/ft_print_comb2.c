/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:08:45 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/16 19:20:14 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	y = -1;
	while (++x <= 98)
	{
		while (++y <= 99)
		{
			if (x < y)
			{
				ft_putchar(x / 10 + 48);
				ft_putchar(x % 10 + 48);
				ft_putchar(' ');
				ft_putchar(y / 10 + 48);
				ft_putchar(y % 10 + 48);
				if (!(y == 99 && x == 98))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		y = -1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
