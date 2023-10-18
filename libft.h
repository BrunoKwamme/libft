#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
size_t	ft_strlen(const char *s);
int	ft_atoi(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main(int argc, char *argv[]);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
#endif