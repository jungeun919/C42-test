#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	test;

	test = 22;
	ft_ft(&test);
	printf("%d", test);
	return (0);
}
