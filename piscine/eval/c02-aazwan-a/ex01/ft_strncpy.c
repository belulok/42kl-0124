/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazwan-a <aazwan-a@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:12:37 by aazwan-a          #+#    #+#             */
/*   Updated: 2024/01/29 16:53:17 by aazwan-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "World1";
	char	*src = "Hello";

	ft_strncpy(dest, src, 3);
	printf("Source     : %s\n", src);
	printf("Destination: %s\n", dest);

	strncpy(dest, src, 3);
	printf("Source     : %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);

}*/
