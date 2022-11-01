# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 10:43:17 by faksouss          #+#    #+#              #
#    Updated: 2022/11/01 11:10:19 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_MD = ft_printf.c print_functions.c

FLAGS = -Wall -Wextra -Werror -c

CC = cc

OBJS_MD = ${SRCS_MD:.c=.o}

HEADER = ft_printf.h

NAME = libftprintf.a

RM = rm -f

all : ${NAME}

${NAME} : ${OBJS_MD}
	@ar -rc $@ ${OBJS_MD}

%.o : %.c ${HEADER}
	@${CC} ${FLAGS} $< -o $@

clean :
	@${RM} ${OBJS_MD}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re