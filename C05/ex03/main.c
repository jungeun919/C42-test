#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(void)
{
	printf("0 | %d\n", ft_recursive_power(5, -1));
	printf("1 | %d\n", ft_recursive_power(5, 0));
	printf("125 | %d\n", ft_recursive_power(5, 3));
}
