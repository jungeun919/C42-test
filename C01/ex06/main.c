int	ft_strlen(char *str);

int	main(void)
{
	int	cnt;

	cnt = ft_strlen("hello") + '0';
	write(1, &cnt, 1);
}
