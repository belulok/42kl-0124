/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:53:41 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/31 22:53:43 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		while (power > 1)
		{
			temp *= nb;
			power--;
		}
	}
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	int ans1 = ft_iterative_power(2,3);
	int ans2 = ft_iterative_power(2,-1);
	int ans3 = ft_iterative_power(2,0);
	int ans4 = ft_iterative_power(2,1);
	printf("2 power of 3: %d\n",ans1);
	printf("2 power of -1: %d\n",ans2);
	printf("2 power of 0: %d\n",ans3);
	printf("2 power of 1: %d\n",ans4);
	return (0);
}
*/
