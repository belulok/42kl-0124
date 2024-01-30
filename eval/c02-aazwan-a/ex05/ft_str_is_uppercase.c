/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 06:30:28 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/27 15:35:51 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

	result = ft_str_is_uppercase("QWER");
	printf("The result of %s", "'QWER'");
	printf(" is %d\n", result);

	result = ft_str_is_uppercase("HeRe");
	printf("The result of %s", "'HeRe'");
	printf(" is %d\n", result);

	result = ft_str_is_uppercase("asdf");
	printf("The result of %s", "'asdf'");
	printf(" is %d\n", result);

	result = ft_str_is_uppercase("8743");
	printf("The result of %s", "'8743'");
	printf(" is %d\n", result);

	result = ft_str_is_uppercase("n3k5");
	printf("The result of %s", "'n3k5'");
	printf(" is %d\n", result);

	result = ft_str_is_uppercase("");
	printf("The result of %s", "");
	printf("       is %d\n", result);

	return 0;
}*/
