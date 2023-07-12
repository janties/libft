/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:24:54 by kisik             #+#    #+#             */
/*   Updated: 2023/07/12 00:37:33 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const char	*str = haystack;
	const char	*find = needle;
	size_t		i;
	int			j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
		return ((char *)str);
	while (i < n && str[i])
	{
		if (str[i] == find[0] && i + ft_strlen(find) <= n)
		{
			if (ft_strncmp(&str[i], find, ft_strlen(find)) == 0)
				return ((char *) str + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
/*int main()
{			   //01234567890
	char *str = "Hello World";
	char *find = "World";
	char *ptr = ft_strnstr(str, find, 9);
	printf("%s\n", ptr);
	return 0;
}*/
