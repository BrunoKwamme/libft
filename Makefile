# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 10:06:49 by bkwamme           #+#    #+#              #
#    Updated: 2023/10/25 11:26:49 by bkwamme          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f
CC = cc
AR = ar rcs
CC_FLAGS=-Wall -Wextra -Werror

SOURCES=ft_isalpha.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_substr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

OBJS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
so:
	$(CC) -nostartfiles -fPIC $(CC_FLAGS) $(SOURCES)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
.c.o:
	$(CC) $(CC_FLAGS) -c $(<) -o $(<:.c=.o)
bonus:
	clear

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
