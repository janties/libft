#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if(src > dest)
		return(ft_memcpy(dest, src, n));
	char * d = (char *)dest;
	char * s = (char *)src;
	while (n--)
		d[n] = s[n];
	return dest;
}
/*
int	main(void)
{
	char s1[] = "con\0sec\0\0te\0tur";
	char s2[20];
	char *s = ft_memmove(s2, s1, 22);
	printf("%s",s);
	return (0);
}*/