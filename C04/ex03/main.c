#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	int res;

	res = ft_atoi(" ---+--+1234ab567");
	printf("%d\n", res);
}
