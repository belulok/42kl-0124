/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:57:16 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/09 21:58:05 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_s1rdup(const char *s1)
{
	size_t	len;
	char	*newstr;

	len = strlen(s1) + 1;
	*newstr = malloc(len);
	if (newstr)
	{
		s1trcpy(newstr, s1);
	}
	return (newstr);
}
