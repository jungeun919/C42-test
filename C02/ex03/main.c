#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("1 | %d\n", ft_str_is_numeric(""));
	printf("0 | %d\n", ft_str_is_numeric(" "));
	printf("0 | %d\n", ft_str_is_numeric("AA"));
	printf("0 | %d\n", ft_str_is_numeric("12A3"));
	printf("1 | %d\n", ft_str_is_numeric("123"));
	return (0);
}
