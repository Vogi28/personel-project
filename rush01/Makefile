# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roduquen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/16 13:45:38 by roduquen          #+#    #+#              #
#    Updated: 2019/02/16 15:21:37 by roduquen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = sudoku
SRCDIR = ./srcs/
INCLDIR = ./includes/
SRCS = $(SRCDIR)main.c $(SRCDIR)initialisation.c $(SRCDIR)ft_affichage.c \
	   $(SRCDIR)ft_check.c $(SRCDIR)ft_ordonne_soluce.c $(SRCDIR)resolv_sudoku.c
OBJS = $(SRCS:.c=.o)
OBJS_ = $(notdir $(OBJS))

all : $(NAME)

$(NAME) : $(OBJS_)
			$(CC) $(CFLAGS) $(OBJS_) -o $(NAME)

$(OBJS_) : $(SRCS)
			$(CC) $(CFLAGS) -c -I $(INCLDIR) $(SRCS)

clean :
			rm -rf $(OBJS_)

fclean : clean
			rm -rf $(NAME)

re : fclean all
