# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daddy_cool <daddy_cool@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 23:10:20 by egiovann          #+#    #+#              #
#    Updated: 2022/11/12 01:20:37 by daddy_cool       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJS := $(SRCS:%.c=%.o)
BSRCS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstnew_bonus.c
BOBJS = $(BSRCS:%.c=%.o)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)
bonus: $(BOBJS) $(OBJS)
	ar -crs $(NAME) $(OBJS) $(BOBJS)
all: $(NAME)
clean:
	rm -f $(OBJS) $(BOBJS)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
.PHONY: bonus all clean fclean re
