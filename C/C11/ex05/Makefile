# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/04 22:44:12 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/04 23:37:36 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= ft_do-op

C_COMP	= cc
C_FLAG	= -Wall -Wextra -Werror

D_HDRS	= ./includes/
F_HDRS	= ft.h

SRC	= main.c	\
	  ft_calcs.c	\
	  ft_error.c	\
	  ft_utils.c
D_SRCS	= ./srcs/
F_SRCS	= $(addprefix ${D_SRCS}, ${SRC})

D_OBJS	= ./srcs/
F_OBJS	= ${F_SRCS:.c=.o}

.c.o	:
	${C_COMP} ${C_FLAG} -I ${D_HDRS} -c $< -o ${<:.c=.o}

${NAME}	: ${F_OBJS}
	${C_COMP} ${C_FLAG} ${F_OBJS} -o ${NAME}

all	: ${NAME}

clean	:
	rm -f ${F_OBJS}

fclean	: clean
	rm -f ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
