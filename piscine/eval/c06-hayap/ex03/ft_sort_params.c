/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:37:08 by hayap             #+#    #+#             */
/*   Updated: 2024/01/28 17:26:08 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_str_arr(char *str[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = "";
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print_array(char *str[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		putstr(str[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	argv++;
	ft_sort_str_arr(argv, argc - 1);
	print_array(argv, argc - 1);
}
