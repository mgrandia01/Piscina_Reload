#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

int	main(void)
{
	int a;
	int b;

	a = 3;
	b = 10;

	ft_swap(&a,&b);
	printf("a = %d, b = %d",a,b);
	return 0;
}
