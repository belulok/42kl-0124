/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zowong <zowong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:47:56 by zowong            #+#    #+#             */
/*   Updated: 2024/01/29 19:42:38 by zowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	print_base_nb(int nbr, char *base, int size)
{
	char			c;
	unsigned int	i;

	if (nbr < 0)
	{
		write(1, "-", 1);
		i = nbr * (-1);
	}
	else
		i = nbr;
	if (i >= (unsigned int)size)
		print_base_nb(i / size, base, size);
	c = base[i % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (check_base(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		print_base_nb(nbr, base, s);
	}
}
/*
#include <stdio.h>

int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(23, "poneyvif");
	printf("\n");
	ft_putnbr_base(18, "0123456789");
	printf("\n");
	ft_putnbr_base(23, "0123456789abcdef");
}
*/
