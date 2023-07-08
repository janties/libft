#include "libft.h"

void ft_bzero(void *s, int n)
{
	ft_memset(s,'0',n);
}

/*
int main()
{
    char str[] = "HelloHelloHello";
    printf("Before ft_bzero: %s\n", str);
    ft_bzero(str, 4);
    printf("After ft_bzero:  %s\n", str);

    return 0;
}
*/
//NOT finished
