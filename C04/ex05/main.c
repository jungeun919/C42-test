#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main()
{
	int	res;
	char *str = "      ---+-bdc";
	char *base = "abcde";

	res = ft_atoi_base(str, base);
	printf("%d\n", res);
}
