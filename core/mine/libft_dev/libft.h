/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:26:54 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/07 20:26:56 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalpha(char character);
int		ft_isdigit(int number);
int		ft_isalnum(char character);
int		ft_isascii(int argument);
int		ft_isprint(int argument);
size_t	ft_strlen(char	*string);
void	*ft_memset(void	*pointers,
			int desiredValue, size_t numberOfBytesToSet);
void	ft_zbero(void	*pointers,
			size_t numberOfBytesToSetToZero);
void	*ft_memcpy(void	*dataTo,
			const void	*dataFrom, size_t	numberOfBytesToSet);
void	*ft_memmove(void	*dataTo,
			const void	*dataFrom, size_t	numberOfBytesToSet);
size_t	ft_strlcpy(char	*dataTo,
			const char	*dataFrom, size_t	dataToBufferSize);
size_t	ft_strlcat(char	*dataTo,
			const char	*dataFrom, size_t	dataToBufferSize);
char	ft_toupper(char character);
char	ft_tolower(char character);
char	*ft_strchr(const char *string, int firstOccurenceOfCharacter);
char	*ft_strrchr(const char *string, int firstOccurenceOfCharacter);
int		ft_strncmp(const char	*str1, const char	*str2, size_t	n);
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	n);
void	*ft_memchr(const void *s, int c, size_t n);
#endif
