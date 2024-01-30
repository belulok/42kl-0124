/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 06:14:07 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/27 15:32:21 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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


	result = ft_str_is_lowercase("hjdf");
	printf("The result of %s", "'hjdf'");
	printf(" is %d\n", result);

	result = ft_str_is_lowercase("QWER");
	printf("The result of %s", "'QWER'");
	printf(" is %d\n", result);

	result = ft_str_is_lowercase("asdf");
	printf("The result of %s", "'asdf'");
	printf(" is %d\n", result);

	result = ft_str_is_lowercase("8743");
	printf("The result of %s", "'8743'");
	printf(" is %d\n", result);

	result = ft_str_is_lowercase("n3k5");
	printf("The result of %s", "'n3k5'");
	printf(" is %d\n", result);

	result = ft_str_is_lowercase("");
	printf("The result of %s", "");
	printf("       is %d\n", result);

	return 0;
}*/
