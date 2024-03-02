/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtamrin <jtamrin@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:51:50 by jtamrin           #+#    #+#             */
/*   Updated: 2024/01/29 19:56:32 by jtamrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
int main ()
{
printf("%d\n", ft_iterative_power(2, 3));
return 0;
}
*/
