# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 15:10:35 by fkuruthl          #+#    #+#              #
#    Updated: 2023/12/06 12:01:49 by fkuruthl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
    ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_atoi.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_strlcat.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_memcmp.c \
	ft_substr.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_strlcpy.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_split.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_itoa.c \
	ft_strtrim.c 
	
OBJ = $(SRC:.c=.o)
SRC_BONUS = ft_lstnew.c \
			ft_lstsize.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstlast.c \
			ft_lstiter.c \
			ft_lstmap.c \

BONUS_OBJ = $(SRC_BONUS:.c=.o)

CC = cc 

CFLAG = -Wall -Werror -Wextra 

DEL = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	@ar -rcs $(NAME) $(BONUS_OBJ)

clean:
	$(DEL) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(DEL) $(NAME) $(bonus)

re: fclean all

.PHONY: all bonus clean fclean re