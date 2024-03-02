/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:54:13 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/31 22:54:15 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	if (nb == 0)
		return (0);
	while ((c * c) < nb && nb < 46341)
		c++;
	if ((c * c) == nb)
		return (c);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int negative = ft_sqrt(-1);
	int positive = ft_sqrt(1);
	int rational_num = ft_sqrt(4);
	int irrational_num = ft_sqrt(2);
	int max_num = ft_sqrt(46340);
	printf("negative num: %d\n", negative);
	printf("positive num: %d\n", positive);
	printf("rational num: %d\n", rational_num);
	printf("irrational num: %d\n", irrational_num);
	printf("Maximum num: %d\n", max_num);
	return (0);
}
*/
