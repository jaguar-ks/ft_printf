# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 10:43:17 by faksouss          #+#    #+#              #
#    Updated: 2022/10/28 10:45:06 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_MD = 

SRCS_BUN = 

FLAGS = -Wall -Wextra -Werror -c

CC = cc

OBJS_MD = ${SRCS_MD:.c=.o}

OBJS_BUN = ${SRCS_BUN:.c=.o}

HEADER = libft.h

NAME = libftprintf.a

RM = rm -f

all : ${NAME}

${NAME} : ${OBJS_MD}
	ar -rc $@ ${OBJS_MD}

%.o : %.c ${HEADER}
	${CC} ${FLAGS} $< -o $@


bonus : ${OBJS_MD} ${OBJS_BUN} ${HEADER}
	ar -rc ${NAME} ${OBJS_MD} ${OBJS_BUN}


clean :
	${RM} ${OBJS_MD} ${OBJS_BUN}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re