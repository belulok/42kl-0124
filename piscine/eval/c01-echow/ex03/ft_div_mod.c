/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echow <echow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:13:40 by echow             #+#    #+#             */
/*   Updated: 2024/01/28 17:56:39 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 10;
	b = 3;

	printf("a : %i, b : %i\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("a : %i, b : %i, div : %i, mod : %d\n", a, b, div, mod);
	return (0);
}

