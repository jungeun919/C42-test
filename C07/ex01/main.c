#include <stdio.h>

int	*ft_range(int min, int max);

int main()
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = ft_range(2, 4);

	while (ptr[i])
	{
		printf("%d", *(ptr + i));
		i++;
	}
}
