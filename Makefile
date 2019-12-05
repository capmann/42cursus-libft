# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/16 14:22:10 by cmarteau          #+#    #+#              #
#    Updated: 2019/12/01 17:07:59 by cmarteau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS = bonus 

SRC = ft_atoi.c\
      ft_bzero.c\
      ft_calloc.c\
      ft_memccpy.c\
      ft_memcpy.c\
      ft_memchr.c\
      ft_memcmp.c\
      ft_memmove.c\
      ft_memset.c\
      ft_putchar_fd.c\
      ft_putendl_fd.c\
      ft_putnbr_fd.c\
      ft_putstr_fd.c\
      ft_split.c\
      ft_strchr.c\
      ft_strdup.c\
      ft_strjoin.c\
      ft_strlcat.c\
      ft_strlcpy.c\
      ft_strlen.c\
      ft_strmapi.c\
      ft_strncmp.c\
      ft_strnstr.c\
      ft_strrchr.c\
      ft_strtrim.c\
      ft_substr.c\
      ft_tolower.c\
      ft_toupper.c\
      ft_isalnum.c\
      ft_isalpha.c\
      ft_isascii.c\
      ft_isdigit.c\
      ft_isprint.c\
      ft_itoa.c

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
ft_lstmap.c

OBJS = ${SRC:.c=.o}

OBJSB = ${SRCB:.c=.o}

FLAGS = -Wall -Werror -Wextra

$(NAME): ${OBJS}
	ar -rcs ${NAME} ${OBJS}

$(BONUS): ${OBJS} ${OBJSB}
	ar -rcs ${NAME} ${OBJS} ${OBJSB}

.c.o.:
	gcc ${FLAGS} -c $< -o ${<:c.=.o}

all: ${NAME}

clean: 
	rm -f ${OBJS} ${OBJSB}

fclean: clean
	rm -f $(NAME) ${OBJS} ${OBJSB}

re: fclean all 

