#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "BlockDMask";
	char *s2 = "Block";
	char *s3 = "BlockDMask";
	char *s4 = "BlockFMask";
	char *s5 = "BlockAMask";

	char *s6 = "\xff";
	char *s7 = "\x0a";

	printf("1  | %d\n",ft_strcmp(s1, s2));
	printf("0  | %d\n",ft_strcmp(s1, s3));
	printf("-1 | %d\n",ft_strcmp(s1, s4));
	printf("1  | %d\n",ft_strcmp(s1, s5));
	printf("1  | %d\n",ft_strcmp(s6, s7));
}
