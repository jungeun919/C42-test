#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 3;
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
