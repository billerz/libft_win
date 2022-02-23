# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharinas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:19:54 by wharinas          #+#    #+#              #
#    Updated: 2022/02/22 20:44:59 by wharinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

#all: t
all: ${NAME}
	@echo "ALL"

$(NAME): ${OBJECTS} 
	@echo $@
	ar -rc $@ $^

%.o: %c libft.h
	@echo "$@"
	${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "CLEAN"
	@rm -rf ${OBJECTS}

fclean: clean
	@echo "FCLEAN"
	@rm -rf ${NAME}

re: fclean all
	@echo "RE"

#Usage command:
t2: 
	echo $(OBJECTS)
t:
	@gcc *.c && ./a.out
n:
	norminette -R checkforbiddensourceheader
