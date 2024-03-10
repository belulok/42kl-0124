/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:48:49 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/10 18:49:51 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastoccurrence;

	lastoccurrence = NULL;
	if (*s == c)
	{
		lastccurrence = s;
	}
	s++;
	return ((char *)lastoccurrence);
}
