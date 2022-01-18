#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[9] = { 8, 2, 1, 4, 3, 7, 8, 5, 9 };

	ft_sort_int_tab(tab, 9);
	for (int i = 0; i < 9; i++)
		printf("%d", tab[i]);
	return (1);
}
