#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	res;
	char	dest[10] = "123456";
	char	src[10]  = "computer";
	
	res = ft_strlcpy(dest, src, 8);
	printf("%s", dest);
	printf("%u", res);

	unsigned int	res2;
	char	dest2[10] = "123456";
	char	src2[10]  = "computer";

	res2 = strlcpy(dest2, src2, 8);
	printf("%s", dest2);
	printf("%u", res2);
	return (0);
}
