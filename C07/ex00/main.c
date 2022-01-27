#include <stdio.h>

char	*ft_strdup(char *src);

int main()
{
	char str[10] = "hello";
	printf("%s\n", ft_strdup(str));
}
