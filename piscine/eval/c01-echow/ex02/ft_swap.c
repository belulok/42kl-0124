/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echow <echow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:09:53 by echow             #+#    #+#             */
/*   Updated: 2024/01/28 17:53:02 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int a, int b)
{
	int	swap;

	swap = a;
	a = b;
	b = swap;
}

int main(void)
{
	int a;
	int b;
	int *pointera;
	int *pointerb;

	a = 1;
	b = 2;

	pointera = &a;
	pointerb = &b;

	ft_swap(a, b);

	printf("a : %d, b : %d\n", a, b);

	return (0);
}

