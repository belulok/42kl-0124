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

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

void	ft_putnbr(int nbr, int system, char *base)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / system, system, base);
		write(1, &base[8 % system], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr, system, base);
	}
	else if (nbr >= system)
	{
		ft_putnbr(nbr / system, system, base);
		write(1, &base[nbr % system], 1);
	}
	else
		write(1, &base[nbr % system], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	system;

	i = 0;
	system = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return ;
	while (base[system] != '\0')
	{
		i = system + 1;
		while (base[i] != '\0')
		{
			if (base[i] == base[system])
				return ;
			i++;
		}
		if (base[system] == '+' || base[system] == '-'
			|| ft_isspace(base[system]) == 1)
			return ;
		system++;
	}
	ft_putnbr(nbr, system, base);
}
/* 
int	main(void)
{
	char	*base;

	base = "0";
	ft_putnbr_base(-2147483647, base);
	return (0);
}
 */