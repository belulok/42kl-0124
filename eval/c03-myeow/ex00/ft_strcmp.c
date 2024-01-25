/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:49:02 by myeow             #+#    #+#             */
/*   Updated: 2024/01/20 22:09:38 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			return (result);
		}
		++s1;
		++s2;
	}
	if (*s1 != *s2)
	{
		result = *s1 - *s2;
		return (result);
	}
	return (result);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	str1[] = "MBGiwr";
	char	str2[] = "MBG";
	int	result = ft_strcmp(str1, str2);
	int real_result = strcmp(str1, str2);
	printf("%d\n%d", result, real_result);
	return 0;
}

