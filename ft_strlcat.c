#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst = ft_strlen(dst);
	size_t len_src = ft_strlen(src);
	if (size <= len_dst)
		return len_src + size;
	return len_dst + ft_strlcpy((dst+len_dst), src, size - len_dst);
}

