int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		while (nb > 0)
			factorial *= nb--;
	}
	return (factorial);
}
/*
#include <stdio.h>

int	main(void)
{
	int factorial = ft_iterative_factorial(6);
	printf("%d", factorial);
}
*/