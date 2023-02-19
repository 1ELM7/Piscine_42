

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;
	
	tab = ft_range(1, 9);
	i = -1;
	while (++i < 8)
		printf("%d\n", tab[i]);
	return (0);
}
