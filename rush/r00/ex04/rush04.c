/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlaw <xlaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:40:30 by xlaw              #+#    #+#             */
/*   Updated: 2024/01/14 17:40:33 by xlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char character);

void	ft_putstr(char *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			++str;
		}
	}
}

char	get_char(int row, int col, int width, int height)
{
	if ((row == 1 && col == 1)
		|| (row == height && col == width && width > 1 && height > 1))
		return ('A');
	else if ((row == 1 && col == width) || (row == height && col == 1))
		return ('C');
	else if (row == 1 || row == height || col == 1 || col == width)
		return ('B');
	else
		return (' ');
}

void	rush(int width, int height)
{
	int	row;
	int	col;

	row = 1;
	if (width <= 0 || height <= 0)
	{
		ft_putstr("Error: Width and height must be positive numbers\n");
		return ;
	}
	while (row <= height)
	{
		col = 1;
		while (col <= width)
		{
			ft_putchar(get_char(row, col, width, height));
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
