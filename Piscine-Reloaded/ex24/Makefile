# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 18:18:50 by rsao-pay          #+#    #+#              #
#    Updated: 2025/10/13 18:18:53 by rsao-pay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= -rcs
INCLUDES 	= -Iincludes
SRCS_DIR	= srcs
SRCS		= $(SRCS_DIR)/ft_putchar.c \
			  $(SRCS_DIR)/ft_putstr.c \
		 	  $(SRCS_DIR)/ft_strcmp.c \
			  $(SRCS_DIR)/ft_strlen.c \
		  	  $(SRCS_DIR)/ft_swap.c
OBJS_DIR	= $(SRCS_DIR)
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
RM			= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 