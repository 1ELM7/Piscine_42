/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:35:36 by jmendez           #+#    #+#             */
/*   Updated: 2022/07/21 14:22:46 by jmendez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{
				i++;
				j++;
				if (to_find[j] == '\0')
					return (&str[i - j]);
			}
			i = i - j;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	src[255] = "strostrostrom";
	char	to_test[255] = "strostrom";

	char	*result = ft_strstr(src, to_test);
	if (result == NULL)
		result = "(null)";
	printf("%s\n", result);
	return (0);
}
