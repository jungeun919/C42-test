#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char s1[20] = "Hello";
	char s2[10] = "Everyone";
	char s3[20] = "Hello";
	char s4[10] = "Everyone";

	strncat(s1, s2, 3);
	printf("%s\n", s1);
	printf("%s\n", ft_strncat(s3, s4, 3));
}
