#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char chr = (char) c;
	int i = ft_strlen(s);
	while(i>= 0)
	{
		if(s[i] == chr)
			return ((char *)s) + i;
		i--;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return 0;
}
