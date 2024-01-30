/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechan <lechan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:05:25 by lechan            #+#    #+#             */
/*   Updated: 2024/01/30 00:33:37 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		if (base[1] == '\0' || base[0] == '\0')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_base(int nbr, char *base, int b)
{
	int	expo;
	int	n;
	int	i;

	n = nbr;
	expo = 1;
	while (nbr >= expo)
	{
		expo = expo * b;
	}
	while (n != 0)
	{
		expo = expo / b;
		i = n / expo;
		n = n % expo;
		write(1, &base[i], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	b = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (check_base(base) == 1)
	{
		while (base[b] != '\0')
		{
			b++;
		}
		print_base(nbr, base, b);
	}
}

int	main(void)
{
	int		i;
	char	*base;

	i = -2;
	base = "01";
	ft_putnbr_base(i, base);
}
