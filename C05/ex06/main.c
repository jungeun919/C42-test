#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
        printf("0 | %d\n", ft_is_prime(-2147483648));
        printf("0 | %d\n", ft_is_prime(0));
        printf("0 | %d\n", ft_is_prime(1));
        printf("1 | %d\n", ft_is_prime(2));
        printf("1 | %d\n", ft_is_prime(3));
        printf("1 | %d\n", ft_is_prime(5));
        printf("0 | %d\n", ft_is_prime(6));
        printf("1 | %d\n", ft_is_prime(7));
}
