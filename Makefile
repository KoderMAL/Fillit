# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/28 17:44:48 by alalaoui          #+#    #+#              #
#    Updated: 2017/05/29 12:30:11 by alalaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror
HEADER = fillit.h \
		 shapes.h \
SRC = ft_file.c \
	  ft_map.c \
	  ft_parse.c \
	  ft_solve.c \
	  main.c \
	  fillit.h \
	  ft_file.c \
	  ft_maths.c \
  	  ft_print.c \
  	  ft_valid.c \

OBJ = $(SRC:.c=.o)

LIB_PATH = ./libft/
LIB_NAME = libft.a
LIB = $(addprefix $(LIB_PATH), $(LIB_NAME))

all : $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HEADER) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all