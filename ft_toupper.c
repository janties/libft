#include "libft.h"

void ft_toupper(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}
/*
int main() {
	char nick[] = "kisik";
	ft_toupper(nick);
	printf("%s", nick);
}
*/