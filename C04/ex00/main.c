#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	int	res;
	char str[10] = "Hello~";

	res = ft_strlen(str);
	printf("%d", res);
}
