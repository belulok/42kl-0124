/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:43:49 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/11 16:22:52 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	joined_str = malloc(s1_len + s2_len + 1);
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, s1_len + 1);
	ft_strlcpy(joined_str + s1_len, s2, s2_len + 1);
	return (joined_str);
}
