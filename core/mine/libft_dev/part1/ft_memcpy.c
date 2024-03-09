/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:05:18 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/09 20:07:53 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t	n)
{
	unsigned char		*byteleveldst;
	const unsigned char	*bytelevelsrc;

	while (n--)
	{
		*byteleveldst = bytelevelsrc;
	}
	return (dst);
}
