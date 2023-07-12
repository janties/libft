/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:09:54 by kisik             #+#    #+#             */
/*   Updated: 2023/07/12 00:15:43 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	int				i;

	chr = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
int main()
{
	char s[] = "hello";
	int a = 'w';
	printf("%p\n", strchr(s, a));
	printf("%p\n", ft_strchr(s, a));
	printf("%s\n", ft_strchr(s, a));
}
*/
//nill nedir aq