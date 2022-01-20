/*
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main()
{
	int	nbr = 42;
	char base[10] = "abcde";
	ft_putnbr_base(nbr, base); //bdc

	printf("\n");

	int	nbr2 = -2147483648;
	char base2[10] = "01";
	ft_putnbr_base(nbr2, base2); //-10000000000000000000000 (32자리수)
}
*/

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int INT_MIN = -2147483648;
int INT_MAX = 2147483647;

int	main(void)
{
	ft_putnbr_base(INT_MIN, "");
	printf("| : %s|\n", "");
	ft_putnbr_base(0, "+");
	printf("| : %s|\n", "");
	ft_putnbr_base(INT_MAX, "-");
	printf("| : %s|\n", "");
	ft_putnbr_base(0, "010");
	printf("| : %s|\n", "");

	ft_putnbr_base(INT_MIN, "01");
	printf("| : %s|\n", "-10000000000000000000000000000000");
	ft_putnbr_base(0, "01");
	printf("| : %s|\n", "0");
	ft_putnbr_base(INT_MAX, "01");
	printf("| : %s|\n", "1111111111111111111111111111111");

	ft_putnbr_base(INT_MIN, "poneyvif");
	printf("| : %s|\n", "-npppppppppp");
	ft_putnbr_base(0, "poneyvif");
	printf("| : %s|\n", "p");
	ft_putnbr_base(INT_MAX, "poneyvif");
	printf("| : %s|\n", "offffffffff");

	ft_putnbr_base(INT_MIN, "0123456789");
	printf("| : %s|\n", "-2147483648");
	ft_putnbr_base(0, "0123456789");
	printf("| : %s|\n", "0");
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("| : %s|\n", "2147483647");

	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	printf("| : %s|\n", "-80000000");
	ft_putnbr_base(0, "0123456789ABCDEF");
	printf("| : %s|\n", "0");
	ft_putnbr_base(INT_MAX, "0123456789ABCDEF");
	printf("| : %s|\n", "7FFFFFFF");

	ft_putnbr_base(10, ".\t");

	printf("\nADD TESTCASE\n");
	ft_putnbr_base(INT_MIN, "     012345");
	printf(": 출력x\n");

	ft_putnbr_base(INT_MIN, "012   345");
	printf(": 출력x\n");

	return (0);
}
