/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 23:20:15 by kisik             #+#    #+#             */
/*   Updated: 2023/07/11 23:28:24 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' 
		|| c == '\r' || c == '\v' || c == '\f');
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;
	int	i;

	sign = 1;
	nbr = 0;
	i = 0;
	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (is_sign(str[i]))
		i++;
	while (ft_isdigit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (sign * nbr);
}
