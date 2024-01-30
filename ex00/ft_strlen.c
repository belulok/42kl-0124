int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
	char testS [] = "Hello 42 KL";

	int counts = ft_strlen(testS);
	printf("The number of characters is: %d", counts);
}
*/