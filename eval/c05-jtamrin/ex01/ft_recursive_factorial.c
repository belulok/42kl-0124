/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtamrin <jtamrin@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:48:20 by jtamrin           #+#    #+#             */
/*   Updated: 2024/01/29 19:51:10 by jtamrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
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
		return (1);
	else if (nb > 0)
		res *= ft_recursive_factorial(nb - 1);
	return (res);
}
/*
int main()
{

printf("%d", ft_recursive_factorial(5));
return 0;
}
*/
