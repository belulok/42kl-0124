/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:41:10 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/29 12:54:33 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (*str);
}
/*
int main()
{
	char input[12] = "Rawr xd";

	printf("Given String:  %s\n", input);
	ft_strupcase(input);
	printf("Converted String: %s\n", input);

	return 0;
}*/
