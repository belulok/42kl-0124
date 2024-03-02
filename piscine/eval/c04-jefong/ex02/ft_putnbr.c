/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:23:38 by jefong            #+#    #+#             */
/*   Updated: 2024/01/24 15:39:34 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int num)
{
	int	c;

	c = num + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putnum(8);
	}
	else if (nb < 0)
	{
		ft_putnum(-3);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnum(nb % 10);
	}
	else
		ft_putnum(nb);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);

	return (0);
}*/
