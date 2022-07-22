# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 17:25:12 by nborderi          #+#    #+#              #
#    Updated: 2022/07/17 19:49:39 by aarrien-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SOURCES = *.c
CFLAGS = -Wall -Wextra -Werror
#HEAD = #./includes/?

all:	${NAME}

program:	main.o ${NAME}
			gcc ${CFLAGS} -o main.c main.h


errors: #rellenar

clean:
			rm -f ${SOURCES:.c}

fclean:	clean
			rm -f ${SOURCES:.c}

re:	fclean all
