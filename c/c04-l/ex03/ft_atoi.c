int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	sign = 1;
	num = 0;
	while (str[count] == ' ' || (str[count] >= '\t' && str[count] <= '\r'))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		num = (str[count] - '0') + (num * 10);
		count++;
	}
	return (num * sign);
}
/*
#include <stdio.h>

int main(void)
{
	char test[] = "   ---+--+12345ab5671321abc";
	int num = ft_atoi(test);
	printf("%d\n", num);
	return (0);
}
*/