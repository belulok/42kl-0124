/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:39:01 by jefong            #+#    #+#             */
/*   Updated: 2024/01/24 15:39:09 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}
/* 
void	ft_putnum(int num)
{
	int	c;

	c = num + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnum(nb % 10);
	}
	else
		ft_putnum(nb);
}

int	main(void)
{
	int count = 0;
	char *str = "Where do you want to go for lunch?";

	count = ft_strlen(str);
	ft_putnbr(count);
	return (0);
} */
