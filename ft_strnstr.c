#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const char *str = haystack;
	const char *find = needle;

	size_t i = 0;
	size_t j = 0;

	if(find[j] == '\0')
		return (char *)str;
	while (str[i] && i+ ft_strlen(find) < n)
	{
		if(str[i] == find[0])
		{
			if(ft_strncmp(&str[i], find, ft_strlen(find)) == 0)
				return (char *)str+i;
			j = 0;
		}
		i++;
	}
	return 0;
}
