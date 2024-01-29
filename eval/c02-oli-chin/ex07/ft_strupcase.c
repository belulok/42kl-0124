/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:32:54 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/28 18:47:32 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}


#include <stdio.h>
int	main(void)
{
	char str1[50] = "abcdefghijklmnopqrstUVWXYz";
	printf("%s\n", ft_strupcase(str1));
	return (0);
}

