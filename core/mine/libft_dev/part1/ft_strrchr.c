/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:48:49 by sesaging          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/11 15:14:01 by sesaging         ###   ########.fr       */
=======
/*   Updated: 2024/03/10 20:45:30 by sesaging         ###   ########.fr       */
>>>>>>> dc9d5cd0faf436c7861a8999c36128b399eb1885
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastoccurrence;

	lastoccurrence = NULL;
	if (*s == c)
	{
		lastoccurrence = s;
	}
	s++;
	return ((char *)lastoccurrence);
}
