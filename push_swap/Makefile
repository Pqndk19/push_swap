# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 13:01:18 by mmassa-r          #+#    #+#              #
#    Updated: 2023/05/16 13:01:19 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Werror -Wall -Wextra -g
LIBFT =	./libft/libft.a
SRC =	./push_swap.c ./init_stack.c ./stack_rules.c ./utils.c ./operations.c \
		./special_cases.c ./sort_5.c ./radix.c ./utils_end.c

OBJ =	$(SRC:.c=.o)

all:	$(NAME)	$(LIBFT)

$(LIBFT):
			$(MAKE) -C ./libft

$(NAME):	$(OBJ)	$(LIBFT)
			$(CC) -g $(CFLAGS) $(OBJ) $(LIBFT) -o push_swap

clean:
			$(MAKE) clean -C ./libft
			rm -Rf $(OBJ)

fclean:		clean
			$(MAKE) fclean -C ./libft
			rm -Rf $(NAME)

re:			fclean all
