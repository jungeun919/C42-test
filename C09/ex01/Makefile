# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jungchoi <jungchoi@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 19:55:01 by jungchoi          #+#    #+#              #
#    Updated: 2022/01/27 12:14:21 by jungchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCS = includes

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}

TARGET = libft.a

all : $(TARGET)

.c.o :
	$(CC) $(CFLAGS) -c -I $(INCS) $< -o ${<:.c=.o}

$(TARGET) : $(OBJS)
	ar crs $(TARGET) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY = clean fclean re all .c.o
