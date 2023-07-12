/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:19:03 by kisik             #+#    #+#             */
/*   Updated: 2023/07/12 01:19:06 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (n--)
		d[n] = s[n];
	return (d);
}
//overlap src > dest
/*
int	main(void)
{
	char s1[] = "con\0sec\0\0te\0tur";q
	char s2[20];
	char *s = ft_memmove(s2, s1, 22);
	printf("%s",s);
	return (0);
}*/