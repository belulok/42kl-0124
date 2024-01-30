#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char tempS [] = "42 KL daddada 321";
	char *pTempS = tempS;

	ft_putstr(pTempS);
}
*/