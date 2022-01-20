#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	printf("%d\n",  ft_atoi(" ---+--+1234ab567")); //-1234
	printf("%d\n",  ft_atoi(" ---+--+1234-ab567")); //-1234
	printf("%d\n",  ft_atoi(" ---+--+a1234-ab567")); //0
	printf("%d\n",  ft_atoi(" ---+--+    1234-ab567")); //0
}
