/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:44:30 by kisik             #+#    #+#             */
/*   Updated: 2023/07/12 17:02:56 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nbr, int n)
{
	if (n == 0)
		return (1);
	return (nbr * ft_power(nbr, n - 1));
}

int	nbr_sign(int nbr)
{
	if (nbr < 0)
		return (-1);
	return (1);
}

int	nbr_len(int nbr, int sign)
{
	int	i;

	i = 0;
	if (sign == -1)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	ft_writing(char *str, int sign, int len, size_t nbr)
{
	int		i;

	str[len] = '\0';
	i = 0;
	if (sign == -1)
	{
		str[i] = '-';
		i++;
		nbr *= -1;
	}
	while (i < len)
	{
		str[i] = (nbr / ft_power(10, len - i - 1)) % 10 + '0';
		i++;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			sign;
	int			len;

	if (n == 0)
		return (ft_strdup("0"));
	sign = nbr_sign(n);
	len = nbr_len(n, sign);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_writing(str, sign, len, n);
	return (str);
}
// -1 +1 sign
// 3 2 len