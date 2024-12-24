#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (*tab != NULL)
	{
		if (f(*tab) != 0)
			i++;
		tab++;
	}
	return (i);
}

/*
int	ft_starts_with_a(char *str)
{
	if (str == NULL)
		return (0);
	if(str[0] == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char	*words[] = { "apple", "banana", "orange", "amor", NULL};

	int	count = ft_count_if(words, ft_starts_with_a);
	printf("%d", count);
}*/
