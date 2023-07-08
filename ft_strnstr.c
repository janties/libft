#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (str[i])
    {
        while (to_find[j] && (str[i+j] == to_find[j]) && i <= len)
            j++;
        if(!to_find[j])
            return (char *)(str + i);
        i++;
        j = 0;
    }
    return 0;
}
/*int main()
{
    char s1[] = "goglleooooogle.com";
    char s2[] = "ogle";
    ft_strnstr(s1, s2, ft_strlen(s1));
}*/
