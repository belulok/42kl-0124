/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:44:10 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/29 14:44:12 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	unsigned int	cmp;

	c = 0;
	cmp = 0;
	while (!cmp && (c < n) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		cmp = s1[c] - s2[c];
		c++;
	}
	if (!cmp && c < n && (s1[c] == '\0' || s2[c] == '\0'))
		cmp = s1[c] - s2[c];
	return (cmp);
}
