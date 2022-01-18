#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[4] = { 1, 2, 3, 4 };

	ft_rev_int_tab(tab, 4);
	for (int i = 0; i < 4; i++)
		printf("%d", tab[i]);
	return (1);
}
