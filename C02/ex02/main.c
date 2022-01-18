#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("1 | %d\n", ft_str_is_alpha(""));
	printf("0 | %d\n", ft_str_is_alpha(" "));
	printf("0 | %d\n", ft_str_is_alpha("123"));
	printf("0 | %d\n", ft_str_is_alpha("12A3"));
	printf("1 | %d\n", ft_str_is_alpha("liA"));
	return (0);
}
