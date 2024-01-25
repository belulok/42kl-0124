/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:01:14 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/15 15:05:23 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int n1)
{
	int	n;

	n = 48;
	while (n <= 57)
	{
		ft_putchar(n1);
		n++;
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(j + 48);
				ft_putchar(k + 48);
				if (i != 7)
				{
					ft_putchar(44);
					ft_putchar(' ');
				}
				k++ ;
			}
			j++ ;
		}
		i++ ;
	}
}
/*
int	main()
{
	ft_print_comb();
	return 0;
}
*/
