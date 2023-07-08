#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);//fd location of byte and 1 is amount of byte :)
}

