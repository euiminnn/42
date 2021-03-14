# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsunki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 15:23:52 by minsunki          #+#    #+#              #
#    Updated: 2020/11/01 21:42:12 by echung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rush-02
SRCS		= $(wildcard src/*.c)
INCL		= includes
GCC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJS		= ${SRCS:.c=.o}
RM			= rm -f

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCL}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean .c.o re
