/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:47:29 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/13 10:50:43 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*byteleveldst;
	const unsigned char	*bytelevelsrc;
	size_t				i;

	byteleveldst = (unsigned char *)dst;
	bytelevelsrc = (const unsigned char *)src;
	if (byteleveldst < bytelevelsrc)
	{
		i = 0;
		while (i < len)
		{
			byteleveldst[i] = bytelevelsrc[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			byteleveldst[len] = bytelevelsrc[len];
		}
	}
	return (dst);
}
