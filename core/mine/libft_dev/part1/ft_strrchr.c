/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:48:49 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/10 20:45:30 by sesaging         ###   ########.fr       */
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
