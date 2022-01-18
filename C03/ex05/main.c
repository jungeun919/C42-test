#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char s1[30] = "hello";
	char s2[10] = "world";
	char s3[30] = "hello";
	char s4[10] = "world";

	char s5[30] = "hello";
    char s6[10] = "world";
    char s7[30] = "hello";
    char s8[10] = "world";
	
	unsigned int a;
	unsigned int b;
	
	printf("%lu\n", strlcat(s1, s2, 2));
	printf("%s\n", s1);
	printf("%u\n", ft_strlcat(s3, s4, 2));
	printf("%s\n", s3);

    printf("%lu\n", strlcat(s5, s6, 8));
	printf("%s\n", s5);
    printf("%u\n", ft_strlcat(s7, s8, 8));
	printf("%s\n", s7);
}
