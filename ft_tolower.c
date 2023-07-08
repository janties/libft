#include "libft.h"


void ft_tolower(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}
/*
int main() {
	char nick[] = "KISIK";
	ft_tolower(nick);
	printf("%s", nick);
}
*/
