#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[30] = "He is smart";
	char	s2[30] = "smart";
	char	s3[30] = "He is smart";
	char	s4[30] = "smart";

	char	s5[30] = "He is smart";
	char	s6[30] = "He";
	char	s7[30] = "He is smart";
	char	s8[30] = "He";

	printf("%s\n", strstr(s1, s2));
//	printf("%d\n", *(strstr(s1, s2)));
	printf("%s\n", ft_strstr(s3, s4));
//	printf("%d\n", *(ft_strstr(s3, s4)));

	printf("%s\n", strstr(s5, s6));
//	printf("%d\n", *(strstr(s5, s6)));
	printf("%s\n", ft_strstr(s7, s8));
//	printf("%d\n", *(ft_strstr(s7, s8)));
}
