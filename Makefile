# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 13:15:08 by pecavalc          #+#    #+#              #
#    Updated: 2025/07/12 22:00:17 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_DIR = srcs
OBJS_DIR = objs

SRCS =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
			 ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstdelone_bonus.c \
			 ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
			 ft_lstnew_bonus.c ft_lstsize_bonus.c \
	  
OBJS = $(patsubst %.c,$(OBJS_DIR)/%.o,$(SRCS))
OBJS_BONUS = $(patsubst %.c,$(OBJS_DIR)/%.o,$(SRCS_BONUS))

HEADERS_DIR = include
HEADERS = $(HEADERS_DIR)/libft.h $(HEADERS_DIR)/libft_bonus.h

CFLAGS = -Wall -Wextra -Werror -c -I$(HEADERS_DIR)

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $@ $^ 

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADERS)
	mkdir -p $(OBJS_DIR)
	cc $(CFLAGS) $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $^ 

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all