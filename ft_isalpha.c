#include <stdio.h>

int ft_isalpha(char n)
{
	if(n >= 'a' && n <= 'z')
		return 1;
	else if(n >= 'A' && n <= 'Z')
		return 1;
	return 0;
}
/*
int main() {
	printf("%d", ft_isalpha('5'));
}

*/
