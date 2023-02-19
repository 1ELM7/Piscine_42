/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:54:24 by jmendez           #+#    #+#             */
/*   Updated: 2022/08/04 19:54:40 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str      *ft_strs_to_tab(int ac, char **av);
void    ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	struct s_stock_str *tab;
	char	*ya[] = {"test", "test2", "", "yes"};

	(void) argc;
	(void) argv;
	tab = ft_strs_to_tab(4, ya);
	ft_show_tab(tab);
	return (0);
}
