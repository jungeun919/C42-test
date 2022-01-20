/*
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main()
{
	int	res;
	char *str = "      ---+-bdc";
	char *base = "abcde";

	res = ft_atoi_base(str, base);
	printf("%d\n", res);
}
*/

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
  printf("Test 1 - 0 ? %i\n", ft_atoi_base("kjdhgh-+--2Alk56wz", "0123456789ABCDEF"));
  printf("Test 2 - -42 ? %i\n", ft_atoi_base("     -+--2Alk56wz", "0123456789ABCDEF"));
  printf("Test 3 - -42 ? %i\n", ft_atoi_base("     -+--hpilk56wz", "chipo"));
  printf("Test 4 - 0 ? %i\n", ft_atoi_base("     -+--hpilk56wz", "chipop"));
  printf("Test 5 - 0 ? %i\n", ft_atoi_base("edkjfjdk     -+--iphlk56wz", "chipo"));
  printf("Test 6 - 0 ? %i\n", ft_atoi_base("ecdkjfjdk     -+--iphlk56wz", "chipo"));
  printf("Test 7 - 0 ? %i\n", ft_atoi_base("kjdhgh-+--fionlk56wz", "poneyvif"));
  printf("Test 8 - -3978 ? %i\n", ft_atoi_base("     -+--fionlk56wz", "poneyvif"));
  printf("Test 9 - 0 ? %i\n", ft_atoi_base("kjdhgh-+--fionlk56wz", "poneyvif"));
  printf("Test 10 - 0 ? %i\n", ft_atoi_base("     -+ --fionlk56wz", "poneyvif"));
  printf("Test 11 - 0 ? %i\n", ft_atoi_base("     -+-- fionlk56wz", "poneyvif"));
  printf("Test 12 - 0 ? %i\n", ft_atoi_base("", "poneyvif"));
  printf("Test 13 - 0 ? %i\n", ft_atoi_base("     -+--cplk56wz", "chippola"));
  printf("Test 14 - 0 ? %i\n", ft_atoi_base("     -+--icplk56wz", ""));
  printf("Test 15 - 0 ? %i\n", ft_atoi_base("     -+--hpilk56wz", ""));
  printf("Test 16 - 0 ? %i\n", ft_atoi_base("     -+--abclk56wz", "abc+de"));
  printf("Test 17 - 0 ? %i\n", ft_atoi_base("     -+--abclk56wz", "abc-de"));
  printf("Test 18 - 0 ? %i\n", ft_atoi_base("     -+--abclk56wz", "abc de"));
  printf("Test 19 - 0 ? %i\n", ft_atoi_base("     -+--abclk56wz", "abc	de"));
  printf("Test 20 - 0 ? %i\n", ft_atoi_base("     -+--ablk56wz", "ab 	de"));
}
