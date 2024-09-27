# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/03 20:50:39 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/03 21:05:35 by marcosv2	      ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= ft_display_file

C_COMP	= cc
C_FLAG	= -Wall -Wextra -Werror

D_HDRS	= ./includes/
F_HDRS	= ft.h

N_SRCS	= main.c
D_SRCS	= ./srcs/
F_SRCS	= $(addprefix ${D_SRCS}, ${N_SRCS})

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

.PHONY	: all clean fclean
