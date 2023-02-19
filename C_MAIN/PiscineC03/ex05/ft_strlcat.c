/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:13:43 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/21 18:07:14 by jmendez          ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (++i < size - 1 && src[i])
		dest[i] = src[i];
	dest[i + 1] = '\0';
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = ft_strlen(dest);
	if (length >= size)
		length = size;
	if (length == size)
		return (length + ft_strlen(src));
	return (length + ft_strlcpy(dest + length, src, size - length));
}

#include <stdio.h>

int	main(void)
{
	char dst[100] = "1234";
	char src[100] = "ABCD";
	
	printf("%d", ft_strlcat(dst, src, 2));
	return 0;
}
