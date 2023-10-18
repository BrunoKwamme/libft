#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
int	ft_atoi(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main(int argc, char *argv[]);
char	*ft_strnstr(const char *big, const char *little, size_t len);
#endif