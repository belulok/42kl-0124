/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtamrin <jtamrin@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:04:19 by jtamrin           #+#    #+#             */
/*   Updated: 2024/01/13 12:32:41 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int a, int b)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	write(1, " ", 1);
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_print_comb(a, b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main(){
	ft_print_comb2();
	return 0;
}
