/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:39:26 by myeow             #+#    #+#             */
/*   Updated: 2024/01/20 22:11:34 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	result = 0;
	i = 0;
	if (n == 0)
		return (0);
	if (*s1 == 0)
		return (result - *s2);
	while (*s1 && (i < n))
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			return (result);
		}
		++s1;
		++s2;
		++i;
	}
	return (result);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char str1[] = "";
	char str2[] = "sfsd";
	int	n = -1;
	//n cant be less than 0 right? since it is an unsigned int
	int	result = ft_strncmp(str1, str2, n);
	int real_result = strncmp(str1, str2, n);
	printf("%d\n%d", result, real_result);
	return (0);
}

