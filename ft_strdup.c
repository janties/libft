#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if(!copy)
		return 0;
	size_t i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return copy;
}
