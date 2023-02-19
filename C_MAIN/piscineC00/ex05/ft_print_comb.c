/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:06:08 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/15 20:43:00 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int p, int s, int t)
{
	ft_putchar(p + 48);
	ft_putchar(s + 48);
	ft_putchar(t + 48);
	if (!((p == 7) && (s == 8) && (t == 9)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	p;
	int	s;
	int	t;

	p = 0;
	while (p <= 7)
	{
		s = p + 1;
		while (s <= 8)
		{
			t = p + 2;
			while (t <= 9)
			{
				if ((p < s) && (s < t))
				{
					ft_print(p, s, t);
				}
				t++ ;
			}
			s++ ;
		}
		p++ ;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
