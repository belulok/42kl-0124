/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:54:47 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/30 21:54:49 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
	char testS [] = "Hello 42 KL";

	int counts = ft_strlen(testS);
	printf("The number of characters is: %d", counts);
}
*/
