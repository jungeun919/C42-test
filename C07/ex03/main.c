#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**str;
	char	*res;

	str = (char **)malloc(sizeof(char) * 3);
	str[0] = (char *)malloc(sizeof(char) * 6);
	str[1] = (char *)malloc(sizeof(char) * 3);
	str[2] = (char *)malloc(sizeof(char) * 5);

	str[0] = "hello";
	str[1] = "hi";
	str[2] = "home";

	res = ft_strjoin(3, str, ": ");
	printf("%s\n", res);
}
