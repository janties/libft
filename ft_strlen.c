#include "libft.h"

size_t ft_strlen(const char *str) {
	size_t i = 0;
	while (str[i])
		i++;
	return i;
}
/*int main() {
	char nick[] = "kisik";
	printf("%d", ft_strlen(nick));
}*/


