/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 06:46:46 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/27 15:37:35 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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


	result = ft_str_is_printable("3;><");
	printf("The result of %s", "'3;><'");
	printf(" is %d\n", result);

	result = ft_str_is_printable("He2?");
	printf("The result of %s", "'He2?'");
	printf(" is %d\n", result);

	result = ft_str_is_printable("asdf");
	printf("The result of %s", "'asdf'");
	printf(" is %d\n", result);

	result = ft_str_is_printable("8743");
	printf("The result of %s", "'8743'");
	printf(" is %d\n", result);

	result = ft_str_is_printable("n3k5");
	printf("The result of %s", "'n3k5'");
	printf(" is %d\n", result);

	result = ft_str_is_printable("");
	printf("The result of %s", "");
	printf("       is %d\n", result);

	return 0;
}*/
