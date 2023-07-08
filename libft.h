#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, int n);
int ft_isdigit(char n);
int ft_isalpha(char n);
void ft_tolower(char *str);
void ft_toupper(char *str);
size_t ft_strlen(const char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_atoi(char *str);
int ft_isascii(int c);
int ft_isprint(int c);
char *ft_strdup(const char *s);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *str, const char *to_find, size_t len);
void *ft_memset(void *b, int c, size_t len);
#endif
