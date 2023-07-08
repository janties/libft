#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *ptr = malloc(size * nmemb);
	if(ptr!= NULL)
		ft_bzero(ptr, size * nmemb);
	return ptr;
}


