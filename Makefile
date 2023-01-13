# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 16:34:02 by jlavalle          #+#    #+#              #
#    Updated: 2022/10/06 16:34:03 by jlavalle         ###   ########.fr        #
#                                                                               #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
OBJ = $(SRC:.c=.o)
HDR = libft.h
CC = gcc 
CFLAGS = -Wall -Werror -Wextra
ERASE = rm -rf
INCLUDE = libft.h

all: $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ) libft.h 
.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HDR)
clean:
	@$(ERASE) $(OBJ)
fclean:
	@$(ERASE) $(OBJ) $(NAME)
re: fclean all
