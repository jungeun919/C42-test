#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[10] = "abc";
	char	str2[10] = "!ABc";
	char	str3[10] = "\nAbc";
	char	str4[10] = "ABC";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	return (0);
}
