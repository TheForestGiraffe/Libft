# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 13:15:08 by pecavalc          #+#    #+#              #
#    Updated: 2025/07/12 17:26:58 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
	
SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		  ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SOURCES_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
				ft_lstnew_bonus.c ft_lstsize_bonus.c \
	  
OBJECTS = $(SOURCES:%.c=%.o)

OBJECTS_BONUS = $(SOURCES_BONUS:%.c=%.o)

HEADERS = libft.h libft_bonus.h

CFLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME): $(OBJECTS) 
	ar rcs $@ $^ 

%.o: %.c $(HEADERS)
	cc $(CFLAGS) $< -o $@

bonus: $(OBJECTS) $(OBJECTS_BONUS)
	ar rcs $(NAME) $^ 

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all