/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:46:15 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/10 18:53:44 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!*needle)
	{
		return ((char *)haystack);
	}
	needle_len = ft_strlen(needle);
	i = 0;
	while (i <= len - needle_len)
	{
		if (haystack[i] == *needle
			&& ft_strncmp(haystack + i, needle, needle_len) == 0)
		{
			return ((char *)(haystack + i));
		}
		++i;
	}
	return (NULL);
}
