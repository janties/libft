#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i = 0;//i start j end
	char *str;
	if(s1 && set)//no null
	{
		size_t j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))// s1 not end up and if s1[i] in sets;
			i++;
		while (j > i && ft_strchr(set, s1[j-1]))
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if(str)
			ft_strlcpy(str, &s1[i], j - i+ 1);
	}
	return str;
}
