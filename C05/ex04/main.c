#include <stdio.h>

int	ft_fibonacci(int index);

//0, 1, 2, 3, 4, 5, 6, 7
//0, 1, 1, 2, 3, 5, 8, 13

int main()
{
	printf("1 | %d\n", ft_fibonacci(1));
	printf("2 | %d\n", ft_fibonacci(3));
	printf("8 | %d\n", ft_fibonacci(6));
}
