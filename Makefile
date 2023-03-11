# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 22:09:18 by vtouze            #+#    #+#              #
#    Updated: 2023/03/10 16:24:04 by vtouze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -g -I./
CC = cc
SRCS = ft_isascii.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strdup.c ft_strlen.c ft_calloc.c ft_memmove.c ft_itoa.c ft_strtrim.c ft_strjoin.c ft_split.c ft_substr.c ft_strmapi.c ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c ft_putstr_fd.c ft_putchar_fd.c ft_toupper.c ft_strnstr.c ft_strrchr.c ft_memchr.c
SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

bonus: ${OBJS} ${OBJSB}
		ar -rc ${NAME} ${OBJS} ${OBJSB}

${NAME}: ${OBJS}
		ar -rc ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS} ${OBJSB}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY : clean all fclean re

