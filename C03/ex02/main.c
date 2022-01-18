#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char s1[11] = "Hello";
	char s2[6] = "World";
	char s3[10] = "Hello";
	char s4[10] = "World";

	strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", ft_strcat(s3, s4));
}
