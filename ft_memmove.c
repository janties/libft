#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char * d = (char *) dest;
	char * s = (char *) src;
	size_t i = 0;
	if(!s)
		return 0;
	while (d[i] && s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return dest;
}

int	main(void)
{
	char s1[] = "con\0sec\0\0te\0tur";
	char s2[20];
	char *s = ft_memmove(s2, s1, 22);
	printf("%s",s);
	return (0);
}