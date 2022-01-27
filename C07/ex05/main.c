#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char **res;

	res = ft_split(":$test1:$test2:$test3:$test4:", " :$");
	printf("res[0]: %s\n", res[0]);
	printf("res[1]: %s\n", res[1]);
	printf("res[2]: %s\n", res[2]);
	printf("res[3]: %s\n", res[3]);
}
