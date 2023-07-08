#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char chr = (unsigned char) c;
	int i = 0;
	while(s[i])
	{
		if(s[i] == chr)
			return ((char *)s) + i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return 0;
}
