/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:37:22 by sesaging          #+#    #+#             */
/*   Updated: 2024/03/09 20:37:25 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if((c >= 'A' && c <= 'Z')
        || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
    else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}  
}
