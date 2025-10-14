# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 18:18:58 by rsao-pay          #+#    #+#              #
#    Updated: 2025/10/13 18:19:00 by rsao-pay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS_DIR	= sources
SRCS		= $(SRCS_DIR)/main.c $(SRCS_DIR)/util.c
OBJS_DIR	= $(SRCS_DIR)
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
RM			= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 