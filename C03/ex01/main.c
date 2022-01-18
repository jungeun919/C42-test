#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *s1 = "BlockDMask";
	char *s2 = "Block";
	char *s3 = "BlockAAAAA";

	printf("1  | %d\n",ft_strncmp(s1, s2, -1));
	printf("0  | %d\n",ft_strncmp(s1, s2, 0));
	printf("0  | %d\n",ft_strncmp(s1, s2, 5));
	printf("1  | %d\n",ft_strncmp(s1, s2, 6));
	printf("1  | %d\n",ft_strncmp(s1, s2, 1000));
	printf("-1 | %d\n",ft_strncmp(s2, s1, 1000));

	printf("0  | %d\n",ft_strncmp(s1, s3, 5));
	printf("1  | %d\n",ft_strncmp(s1, s3, 555));
}
