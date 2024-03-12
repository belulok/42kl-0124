/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:59:06 by sesaging          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2024/03/11 15:08:32 by sesaging         ###   ########.fr       */
=======
/*   Updated: 2024/03/10 20:44:28 by sesaging         ###   ########.fr       */
>>>>>>> dc9d5cd0faf436c7861a8999c36128b399eb1885
=======
/*   Updated: 2024/03/10 20:44:28 by sesaging         ###   ########.fr       */
=======
/*   Updated: 2024/03/11 15:08:32 by sesaging         ###   ########.fr       */
>>>>>>> 64121642ff0a6ca1b63b3d5099837922caa1c3a2
>>>>>>> 963593aad42acce2250ae2f6fd069d358debfe21
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = count * size;
	ptr = malloc(totalsize);
	if (ptr)
	{
		memset(ptr, 0, totalsize);
	}
	return (ptr);
}
