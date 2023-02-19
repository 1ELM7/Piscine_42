/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:38:22 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/18 04:44:39 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	howmuch;

	howmuch = 0;
	while (*str++)
		howmuch++;
	return (howmuch);
}

#include <stdio.h>

int	main(void)
{
	printf("%d",ft_strlen("blababou"));
	return (0);
}
