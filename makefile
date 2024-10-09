# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanavar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 13:44:37 by joanavar          #+#    #+#              #
#    Updated: 2024/10/09 14:17:20 by joanavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=philo

LIBFT			= ./Libreries/Libft/libft.a
PRINTF			= ./Libreries/Printf/libftprintf.a
INC				= ./header/philo.h
SRC_DIR			= src
OBJ_DIR			= obj


CC				= cc
CFLAGS			= -Wall -Werror -Wextra
RM				= rm -rf

SRCS			=	data_init.c			\
					init.c				\
					main.c				\
					monitor.c			\
					parsing.c			\
					safe.c				\
					setters_getters.c	\
					syncro_utils.c		\
					utils.c				\
					write.c				\

OBJ				= $(addprefix $(OBJ_DIR)/, ${SRCS:.c=.o})

all				$(NAME)

$(NAME):		$(OBJ) $(LIBFT) $(PRINTF)
				$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
				@make -C Libreries/libft

$(PRINTF):
				@make -C Libreries/Printf


