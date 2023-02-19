

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	ac = ac;
	av = av;
	printf("atoi %d\n", atoi("\t\t\n\v456"));	
	printf("ft_atoi %d\n", ft_atoi("\t\t\n\v456"));	
}
