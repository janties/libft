/*#include "libft.h"

char *ft_alloc(int space)
{
	char * ptr = (char *)malloc(sizeof(char) * (space + 1));
	if(!ptr)
		return NULL;
	return ptr;
}

int ft_intlen(int nbr)
{
	
}	
char *ft_itoa(int n)
{
	int digit_amount = 0;
	int digit;
	int sign = 1;
	if(n == 0)
		return "0";
	if(n < 0)
	{
		sign = -1;
		n *= -1;
		digit_amount = 1;
	}
	size_t tmp = n;
	while (tmp != 0)
	{
		tmp/=10;
		digit_amount += 1;
	}
	tmp = n;
	char * str = ft_alloc(digit_amount);
	int i = 0;
	str[digit_amount] = '\0';
	while (str[i])
	{
		digit = tmp % 10;
		str[digit_amount - i - 1] = digit + '0';
		tmp /= 10;
		i++;
	}
	if(sign < 0)
		str[0] = '-';
	return str;
}


*/