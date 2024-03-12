/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:44:30 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/11 12:44:33 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end = s1 + strlen(s1) - 1;
	size_t		trim_len;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_in_set(*s1, set))
		s1++;
	while (end > s1 && is_in_set(*end, set))
		end--;
	trim_len = end - s1 + 1;
	trimmed = (char *)malloc(trim_len + 1);
	if (!trimmed)
		return (NULL);
	strncpy(trimmed, s1, trim_len);
	trimmed[trim_len] = '\0';
	return (trimmed);
}
