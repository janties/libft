#include "libft.h"

int ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')//space - tilda
		return (1);
	else
		return (0);
}
