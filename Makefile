# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 16:34:02 by jlavalle          #+#    #+#              #
#    Updated: 2022/10/06 16:34:03 by jlavalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_iaslnum.c ft_isalpha.c ft_iascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	ft_strlen.c ft_strncmp.c ft_strstr.c ft_strrchr.c ft_tolower.c \
	ft_toupper.c
OBJ = $(SRC:.c=.o)
NAME = libft.a
CC = gcc -Wall -Werror -Wextra
ERASE = ra -rf
INCLUDE = libft.h

all: $(NAME)

$(NAME) = $(OBJ)
	@ar rcs $(NAME) $(OBJ) libft.h 

clean:
	@$(ERASE) $(OBJ)

fclean
	@$(ERASE) $(OBJ) $(NAME)

re: fclean all