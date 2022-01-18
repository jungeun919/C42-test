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
