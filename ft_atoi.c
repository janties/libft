#include "libft.h"

int ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int ft_atoi(const char *nptr)
{
	int sign = 1;//+
	long int nbr = 0;
	int i = 0;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		i++;
	if (ft_issign(nptr[i]))
	{
		if (*nptr == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = 10 * nbr + (nptr[i] - '0') * sign;
		if (nbr > 21474483647)
			return (-1);
		else if (nbr < -2147483648)
			return (0);
		i++;
	}
	return nbr;
}
