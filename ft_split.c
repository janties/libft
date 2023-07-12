/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 23:48:58 by kisik             #+#    #+#             */
/*   Updated: 2023/07/12 00:17:21 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_len(const char *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

char	*word_dup(char *str, char sep)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc(sizeof(char) * (word_len(str, sep) + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (str[i] != sep && str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

size_t	word_count(char *s, char sep)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != sep && (s[i + 1] == sep || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	size_t	words_amount;
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *) s;
	words_amount = word_count(str, c);
	split = (char **)malloc(sizeof(char *) * (words_amount + 1));
	if (!split)
		return (0);
	split[words_amount] = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			split[j] = word_dup(&str[i], c);
			i += ft_strlen(split[j]) - 1;
			j++;
		}
		i++;
	}
	return (split);
}
//s str c sep
/*int main() {
	char str[] = ",,,Elma,,Armut,,,,,,,Karpuz,,,, ";
	char sep = ',';

	char **s = ft_split(str, sep);

	printf("%s\n", s[0]);
	printf("%s\n", s[1]);
	printf("%s\n", s[2]);
	printf("%s\n", s[3]);
	return 0;
}*/
