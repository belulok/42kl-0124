/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlaw <xlaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:33:40 by xlaw              #+#    #+#             */
/*   Updated: 2024/01/14 17:33:43 by xlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	width;
	int	height;

	if (argc == 3)
	{
		width = atoi(argv[1]);
		height = atoi(argv[2]);
	}
	else
	{
		width = 12;
		height = 16;
	}
	rush(width, height);
	return (0);
}
