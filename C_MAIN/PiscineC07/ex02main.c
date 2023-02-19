

#include <stdio.h>

int	main(void)
{
	int	*stmp;
	int	len;
	int	i;

	len = ft_ultimate_range(&stmp, -12, 40);
	i = -1;
	while (++i < 8)
		printf("%d", len);
	return (0);
}
