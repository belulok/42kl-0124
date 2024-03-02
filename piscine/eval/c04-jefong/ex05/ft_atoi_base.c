/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:23:21 by jefong            #+#    #+#             */
/*   Updated: 2024/01/29 18:00:17 by sesaging         ###   ########.fr       */
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

int	ft_atoi(char *str, int system, char *base)
{
	int	i;
	int	j;
	int	is_neg;
	int	num;

	i = -1;
	is_neg = 0;
	num = 0;
	while (str[i + 1] != '\0' && (str[i + 1] == '-' || str[i + 1] == '+'))
		is_neg += ((str[++i] == '-') * 1);
	while (str[++i] != '\0')
	{
		j = -1;
		while (++j < system)
		{
			if (str[i] != base[j] && base[j + 1] == '\0')
				return (((is_neg % 2 == 1) * -num) + ((is_neg % 2 != 1) * num));
			if (str[i] == base[j])
			{
				num = num * system + j;
				break ;
			}
		}
	}
	return (((is_neg % 2 == 1) * -num) + ((is_neg % 2 != 1) * num));
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_neg;
	int	system;

	i = 0;
	is_neg = 0;
	system = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[system] != '\0')
	{
		i = system + 1;
		while (base[i] != '\0')
			if (base[i++] == base[system])
				return (0);
		if (base[system] == '+' || base[system] == '-')
			return (0);
		system++;
	}
	while (*str != '\0' && ft_isspace(*str))
		str++;
	return (ft_atoi(str, system, base));
}
 
int	main(int argc, char **argv)
{
	int	count;
	int	num;

	count = argc;
	num = ft_atoi_base(argv[1], argv[2]);
	printf("%d", num);
	return (0);
}
