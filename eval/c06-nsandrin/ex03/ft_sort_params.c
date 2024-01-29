/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:24:47 by nsandrin          #+#    #+#             */
/*   Updated: 2024/01/29 17:42:10 by nsandrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	int	count;

	count = 0;
	while (a[count] != '\0' || b[count] != '\0')
	{
		if (a[count] == b[count])
		{
			count++;
		}
		else if (a[count] != b[count])
		{
			return (a[count] - b[count]);
			count++;
		}
	}
	return (0);
}

void	swap(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[i];
				argv[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	m;
	int	n;

	swap(argc, argv);
	m = 1;
	while (m < argc)
	{
		n = 0;
		while (argv[m][n])
		{
			n++;
		}
		write (1, argv[m], n);
		write (1, "\n", 1);
		m++;
	}
	return (0);
}
