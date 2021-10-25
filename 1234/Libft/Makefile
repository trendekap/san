# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eakiko <eakiko@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 20:28:03 by eakiko            #+#    #+#              #
#    Updated: 2021/10/25 14:57:04 by segome           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FLAGS	=	-Wall -Werror -Wextra

HEADER	=	libft.h

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
			ft_isascii.c	ft_isprint.c	ft_strlen.c\
			ft_memset.c		ft_bzero.c		ft_memcpy.c\
			ft_memmove.c	ft_strlcpy.c	ft_strlcat.c\
			ft_toupper.c	ft_tolower.c	ft_strchr.c\
			ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
			ft_memcmp.c		ft_strnstr.c	ft_atoi.c\
			ft_calloc.c		ft_strdup.c\
			ft_substr.c		ft_strjoin.c	ft_strtrim.c\
			ft_split.c	ft_itoa.c	ft_strmapi.c	ft_striteri.c\
			ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

OBJS	=	${SRCS:%.c=%.o}

all:	${NAME}

${NAME}:	${OBJS} ${HEADER}
	ar rcs ${NAME} $?

%.o:	%.c ${HEADER}
	gcc ${FLAGS} -c $< -o $@

clean:
	rm -fr ${OBJS} ${OBJS_B}

fclean:	clean
	rm -fr ${NAME}

re:	fclean all

.PHONY:	all clean fclean re bonus
