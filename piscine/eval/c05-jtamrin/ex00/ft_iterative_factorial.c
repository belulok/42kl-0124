/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtamrin <jtamrin@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:42:34 by jtamrin           #+#    #+#             */
/*   Updated: 2024/01/29 19:47:17 by jtamrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;
	int	res;
	int	index;

	res = nb;
	index = nb;
	x = 0;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		while (i < nb)
		{
			res *= (index - i);
			i++;
		}
	}
	return (res);
}
/*
int main()
{

printf("%d", ft_iterative_factorial(5));
return 0;
}
*/
