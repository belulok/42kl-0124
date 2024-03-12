/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:20:45 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/11 15:20:46 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		**split;
	size_t		i;
	const char	*word_start;
	size_t		word_len;

	*word_start = s;
	if (!s)
		return (NULL);
	words = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
			s++;
		word_len = s - word_start;
		split[i] = (char *)malloc(word_len + 1);
		if (!split[i])
		{
			while (i > 0)
			{
				free(split[--i]);
			}
			free(split);
			return (NULL);
		}
		strncpy(split[i], word_start, word_len);
		split[i][word_len] = '\0';
		i++;
	}
	split[words] = NULL;
	return (split);
}
