/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:15:11 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/10 18:36:17 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlength;
	size_t	srclength;
	size_t	totallength;
	size_t	i;

	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	totallength = dstlength + srclength;
	if (dstsize <= dstlength)
	{
		return (totallength);
	}
	i = dstlength;
	while (*src != '\0' && i < dstsize - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (totallength);
}
