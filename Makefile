# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scruz-ra <scruz-ra@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 17:23:48 by scruz-ra          #+#    #+#              #
#    Updated: 2024/01/13 22:26:45 by scruz-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
            ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
            ft_isprint.c ft_memcmp.c ft_tolower.c ft_toupper.c ft_strchr.c \
            ft_strnstr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strncmp.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_strdup.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c 
OBJ = $(SRC:.c=.o)

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
				ft_lstiter_bonus.c ft_lstmap_bonus.c 

BONUSOBJ = $(BONUSSRC:.c=.o)

$(NAME): $(OBJ)
	$(LIB) $@ $^
	@echo "\033[1;35mAll required files succesfully compiled!\033[0m"

all: $(NAME)

bonus: $(BONUSOBJ)
	$(LIB) $(NAME) $(BONUSOBJ)
	@echo "\033[1;35mAll bonus files succesfully compiled!\033[0m"

%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)
	@echo "\033[1;35mObjects cleaned!\033[0m"

fclean: clean
	$(RM) $(NAME)
	@echo "\033[1;35mAll cleaned!\033[0m"

re: fclean all

.PHONY: all clean fclean re