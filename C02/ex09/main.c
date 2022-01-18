#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[100] = "sALut, co!ment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str3[100] = "SALut, Co!Ment tu vas ? 42mots quarante--!deux; cinquante+et+un";

	
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	return (0);
}
