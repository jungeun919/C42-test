#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("1 | %d\n", ft_str_is_printable(""));
	printf("1 | %d\n", ft_str_is_printable(" "));
	printf("0 | %d\n", ft_str_is_printable("\nabc"));
	printf("1 | %d\n", ft_str_is_printable("123!"));
	printf("1 | %d\n", ft_str_is_printable("abc123"));
	return (0);
}
