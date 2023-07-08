#include "libft.h"
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    char * str = (char *) b;
    int i = 0;
    while (str[i] && i <= len)
    {
        str[i] = c;
        i++;
    }
    return str;
}

int main()
{
    char url[] = "https://github.com/kisik";
    ft_memset(&url[6], '*', 10);
    printf("%s", url);
}