/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:47:29 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/10 20:43:50 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*byteleveldst;
	const unsigned char	*bytelevelsrc;
	size_t				i;

	byteleveldst = dst;
	bytelevelsrc = src;
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
