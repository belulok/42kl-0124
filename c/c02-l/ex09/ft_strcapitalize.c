/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:16:00 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/29 17:16:02 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && str[c] >= 'A' && str[c] <= 'Z')
			str[c] += 32;
		else if (i > 0 && str[c] == ' ')
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
