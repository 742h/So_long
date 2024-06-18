# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:38:20 by hassaleh          #+#    #+#              #
#    Updated: 2024/04/28 15:38:00 by hassaleh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = #-Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_atoi ft_isalnum ft_isalpha ft_isdigit ft_calloc ft_isascii ft_isprint ft_tolower\
 ft_toupper ft_strlen ft_strdup ft_strnstr ft_strlcat ft_strlcpy ft_strchr ft_strrchr\
 ft_memset ft_bzero ft_memcmp ft_memchr ft_memcpy ft_memmove ft_strncmp ft_substr\
 ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putendl_fd ft_putchar_fd\
 ft_putnbr_fd ft_putstr_fd

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS)))

.c.o: $(SRCS) $(SRCS_B)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS) $(OBJS_B)
	$(AR) $@ $^

all: $(NAME)

bonus : $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re bonus