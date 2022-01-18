#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[10] = "computer";
	char	src[10] = "hello";
	char	dest1[10] = "computer";
	char	src1[10] = "hello";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s", ft_strncpy(dest1, src1, 10));
	return (0);
}
