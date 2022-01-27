#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int num = 5;
	int *ptr = &num;
	int **ptr2 = &ptr;
	printf("%d\n", ft_ultimate_range(ptr2, 2, 4));
}
