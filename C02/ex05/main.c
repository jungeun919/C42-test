#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("1 | %d\n", ft_str_is_uppercase(""));
	printf("0 | %d\n", ft_str_is_uppercase(" "));
	printf("0 | %d\n", ft_str_is_uppercase("aa"));
	printf("0 | %d\n", ft_str_is_uppercase("12A3"));
	printf("1 | %d\n", ft_str_is_uppercase("ABC"));
	return (0);
}
