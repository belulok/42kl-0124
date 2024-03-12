/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:44:08 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/11 12:44:10 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (!s || !f)
		return (NULL);

	size_t len = strlen(s);
	char *newStr = malloc(len + 1);
	if (!newStr)
		return (NULL);

	size_t i = 0;
	while (i < len)
	{
		newStr[i] = f(i, s[i]);
		i++;
	}
	newStr[i] = '\0';

	return (newStr);
}
