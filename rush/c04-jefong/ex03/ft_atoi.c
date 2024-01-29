/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:40:53 by jefong            #+#    #+#             */
/*   Updated: 2024/01/24 15:40:54 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;
	int	num;

	i = 0;
	is_neg = 0;
	num = 0;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			is_neg++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		num = num * 10 + (str[i++] - 48);
	if (is_neg % 2 == 1)
		num = -num;
	return (num);
}
/* 
int	main(int argc, char **argv)
{
	int	count;
	int	num;

	count = argc;
	num = ft_atoi(argv[1]);
	printf("%d", num);
}
*/