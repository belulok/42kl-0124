/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:11:27 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/11 16:20:57 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_reverse(char *str, int length)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

void	ft_itoa(int num, char *str)
{
	int	i;
	int	rem;
	int	is_negative;

	is_negative = 0;
	i = 0;
	if (num == 0)
		ft_strcpy(str, "0");
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % 10;
		str[i++] = (rem + '0');
		num /= 10;
	}
	if (is_negative)
		str[i++] = '-';
	str[i] = '\0';
	ft_reverse(str, i);
}
