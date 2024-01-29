/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:39:16 by jefong            #+#    #+#             */
/*   Updated: 2024/01/29 15:59:55 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
	{
		write(1, &str[i], 1);
	}
}
/* 
int	main(void)
{
	char *str = "Where do you want to go for lunch?";

	ft_putstr(str);
	return (0);
} */
