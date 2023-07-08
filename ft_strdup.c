#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*t;
	size_t	i;
	size_t	u;

	u = ft_strlen(s1);
	t = (char *)malloc(sizeof(char) * (u + 1));
	if (!t)
		return (NULL);
	i = 0;
	while (*s1)
	{
		t[i] = *s1;
		i++;
		s1++;
	}
	t[i] = '\0';
	return (t);
}
/*
int main()
{
    char name[] = "aleyna";
    char * out = ft_strdup(name);
    printf("%s", out);
}
*/
