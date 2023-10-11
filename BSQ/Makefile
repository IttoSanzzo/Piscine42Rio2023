# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 03:55:41 by marcosv2          #+#    #+#              #
#    Updated: 2023/09/20 03:56:04 by marcosv2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CCC = cc

CFLAGS = -Wall -Wextra -Werror


D_HDRS = ./includes/
D_SRCS = ./srcs/
L_OBJS = ${SRCS:.c=.o}

SRC = main.c ft_conditions.c ft_handle_map.c ft_init.c ft_manage_file.c \
		ft_solver.c ft_split.c ft_utils.c ft_utils_s.c ft_errors.c

SRCS = $(addprefix $(D_SRCS), $(SRC))

.c.o:
	${CCC} ${CFLAGS} -I ${D_HDRS} -c $< -o ${<:.c=.o}

${NAME} : ${L_OBJS}
	${CCC} ${CFLAGS} -o ${NAME} ${L_OBJS}

all : ${NAME}

clean :
	rm -f ${L_OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
