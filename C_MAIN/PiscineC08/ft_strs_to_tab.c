/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:02:01 by jmendez           #+#    #+#             */
/*   Updated: 2022/08/04 01:40:52 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	howmuch;

	howmuch = 0;
	while (*str++)
		howmuch++;
	return (howmuch);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*s;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	s = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tot;
	int			i;

	tot = malloc(ac * (sizeof(struct s_stock_str) + 1));
	i = 0;
	if (ac == 0)
	{
		tot[0].str = 0;
		return (tot);
	}
	while (i < ac)
	{
		tot[i].size = ft_strlen(av[i]);
		tot[i].str = av[i];
		tot[i].copy = ft_strdup(av[i]);
		i++;
	}
	tot[i].str = 0;
	return (tot);
}
