# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/06 13:41:37 by dbourdon          #+#    #+#              #
#    Updated: 2016/02/06 14:21:46 by dbourdon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

SRC = get_next_line.c main.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

.PHONY: clean fclean re libft

all: $(NAME)

$(NAME) : libft
	@clang $(FLAGS) $(SRC) -o $(NAME) -L./libft/ -lft
	@echo "|| *** COMPILATION *** ||"

libft:
	@make -C libft/

clean:
	@make -C libft/ clean
	@rm -f $(OBJ)
	@echo "|| *** SUPPRESSION *** ||"

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean
	@echo "|| ***    TOTAL    *** ||"

re: fclean all
