#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*dest;
	char	*src = "hello";

	dest = ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
