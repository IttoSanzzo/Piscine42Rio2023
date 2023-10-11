# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 23:40:05 by marcosv2          #+#    #+#              #
#    Updated: 2023/10/03 18:37:12 by marcosv2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

C_COMP	= cc
C_FLAG	= -Wall -Wextra -Werror
C_ARRC	= ar rc
C_RLIB	= ranlib

D_HDRS	= ./includes/
F_HDRS	= ft.h

N_SRCS	= ft_putchar.c	\
	  ft_putstr.c	\
	  ft_strlen.c	\
	  ft_strcmp.c	\
	  ft_swap.c
D_SRCS	= ./srcs/
F_SRCS	= $(addprefix ${D_SRCS},${N_SRCS})

D_OBJS	= ./srcs/
F_OBJS	= ${F_SRCS:.c=.o}

.c.o	:
	${C_COMP} ${C_FLAG} -I ${D_HDRS} -c $< -o ${<:.c=.o}

${NAME}	: ${F_OBJS}
	${C_ARRC} ${NAME} ${F_OBJS}
	${C_RLIB} ${NAME}

all	: ${NAME}

clean	:
	rm -f ${F_OBJS}

fclean	: clean
	rm -f ${NAME}

re	: fclean all

.PHONY : all clean fclean re
