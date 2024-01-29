/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oli-chin <oli-chin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:25:37 by oli-chin          #+#    #+#             */
/*   Updated: 2024/01/28 17:25:47 by oli-chin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
