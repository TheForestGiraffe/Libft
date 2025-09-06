# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 13:15:08 by pecavalc          #+#    #+#              #
#    Updated: 2025/05/20 18:36:37 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_compiled_library
	
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror -I.
LDFLAGS  = -L.
LDLIBS   = -lft  

all: $(NAME) run 

$(NAME): $(OBJECTS) 
	cc $(LDFLAGS) $^ $(LDLIBS) -o $@

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

run: $(NAME)
	@./$(NAME)
	
clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME) *.txt

re: fclean all