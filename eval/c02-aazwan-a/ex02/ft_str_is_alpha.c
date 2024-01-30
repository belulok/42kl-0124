/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:07:26 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/27 15:29:14 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

	result = ft_str_is_alpha("as2dfghjkl");
	printf("The result of %s", "'as2dfghjkl'");
	printf(" is %d\n", result);

	result = ft_str_is_alpha("QWER");
	printf("The result of %s", "'QWER'");
	printf(" is %d\n", result);

	result = ft_str_is_alpha("Cv5");
	printf("The result of %s", "'Cv5'");
	printf(" is %d\n", result);

	result = ft_str_is_alpha("12a4");
	printf("The result of %s", "'12a4'");
	printf(" is %d\n", result);

	result = ft_str_is_alpha(" ");
	printf("The result of %s", "' '");
	printf("    is %d\n", result);

	return 0;
}*/
