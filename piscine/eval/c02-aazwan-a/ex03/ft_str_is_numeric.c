/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:51:08 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/27 15:33:06 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	int result;


	result = ft_str_is_numeric("1234");
	printf("The result of %s", "'1234'");
	printf(" is %d\n", result);

	result = ft_str_is_numeric("QWER");
	printf("The result of %s", "'QWER'");
	printf(" is %d\n", result);

	result = ft_str_is_numeric("asdf");
	printf("The result of %s", "'asdf'");
	printf(" is %d\n", result);

	result = ft_str_is_numeric("8743");
	printf("The result of %s", "'8743'");
	printf(" is %d\n", result);

	result = ft_str_is_numeric("n3k5");
	printf("The result of %s", "'n3k5'");
	printf(" is %d\n", result);

	result = ft_str_is_numeric(" ");
	printf("The result of %s", "' '");
	printf("    is %d\n", result);

	return 0;
}*/
