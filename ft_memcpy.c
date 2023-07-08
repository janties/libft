/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:10:02 by kisik             #+#    #+#             */
/*   Updated: 2023/07/06 23:37:36 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d = (char *) dest;//memcpyde zaten kopyalanacak araligi kac verirsek verelim tasma olmaz cunku null kopyalar 
	char *s = (char *) src;// ve her char arrayin icinde  otomatik null vardir ondan dolayi
	size_t i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}
