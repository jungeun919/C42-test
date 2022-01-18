void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str = "Coucou\ntu vas bien ?\xff co";
	char	*str2 = "\xff";
	ft_putstr_non_printable(str2);
	return (0);
}
