#include "libft.h"
int ft_isdigit(char n)
{
	if (n >= '0' && n <= '9')
		return 1;
	return 0;
}
/*
int main() {
	printf("%d", ft_isdigit('a'));
}
*/
