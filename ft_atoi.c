
#include "libft.h"

int	ft_atoi(char *str)
{
	int	index;
	int	numb;
	int	negative;

	index = 0;
	numb = 0;
	negative = 1; 

	while ((str[index] > 0 && str[index] < 14 )|| str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		numb *= 10;
		numb += (str[index] - '0');
		index++;
	}
	return (numb * negative);
}
/*
int main()
{
    printf("%d\n", ft_atoi("96367676"));
}
*/
