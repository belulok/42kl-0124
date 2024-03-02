/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:44:41 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/29 14:44:43 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1] != '\0')
		c1++;
	while (src[c2] != '\0' && c2 < nb)
	{
		dest[c1 + c2] = src[c2];
		c2++;
	}
	dest[c1 + c2] = '\0';
	return (dest);
}
