#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (NULL);
	char *sub = (char *)malloc(sizeof(char) * (len + 1));
	size_t i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return sub;
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str = "Hello World";
	char *sub = ft_substr(str, 0, 5);
	printf("%s#\n", sub);
	return 0;
}		*/
	