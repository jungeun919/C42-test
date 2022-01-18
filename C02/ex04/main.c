#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("1 | %d\n", ft_str_is_lowercase(""));
	printf("0 | %d\n", ft_str_is_lowercase(" "));
	printf("0 | %d\n", ft_str_is_lowercase("AA"));
	printf("0 | %d\n", ft_str_is_lowercase("12a3"));
	printf("1 | %d\n", ft_str_is_lowercase("abc"));
	return (0);
}
