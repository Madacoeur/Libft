# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamroun <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 19:27:38 by aamroun           #+#    #+#              #
#    Updated: 2025/11/17 17:03:35 by aamroun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Compilateurs et les flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#Creer la bibliotheque
AR = ar rcs
RM = rm -f

SRCS = ft_strlen.c ft_strdup.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

HEADER = libft.h

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Libft.a a ete cree"

#Compiler les fichiers en .o
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@echo "tous les ichiers objets ont ete supprimes"

fclean: clean
	$(RM) $(NAME)
	@echo "libft.a est supprimee"

#Tout refaire
re: fclean all

.PHONY: all clean fclean re
