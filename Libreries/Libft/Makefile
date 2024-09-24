# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 17:49:35 by joanavar          #+#    #+#              #
#    Updated: 2024/01/30 15:41:58 by joanavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################
NAME		= libft.a
CC 		= cc
CFLAGS	= -Wall -Wextra -Werror -MMD
AR		= ar -rcs

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

HEADER	= libft.h

SRCS = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c \
ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strdup.c ft_strlcat.c ft_strlen.c \
ft_strnstr.c ft_substr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlcpy.c \
ft_strncmp.c ft_strrchr.c ft_tolower.c ft_itoa.c ft_substr.c ft_strjoin.c ft_strmapi.c ft_striteri.c \
ft_strtrim.c ft_split.c 

SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
################################################################################
#                                  Makefile  objs                              #
################################################################################

OBJS		= $(addprefix obj/, ${SRCS:.c=.o})
BONUS_OBJS	= $(addprefix obj/, ${SRCS_BONUS:.c=.o})
DEP			= $(addprefix obj/, ${SRC:.c=.d})
DEP_BONUS	= $(addprefix obj/, ${SRC_BONUS:.c=.o})

################################################################################
#                                 Makefile rules                               #
################################################################################

all: ${NAME}

-include $(DEP)
-include $(DEP_BONUS)



ifndef BONUS
${NAME}:	${OBJS} 
			$(AR) ${NAME} $(OBJS)
else
${NAME}:	${OBJS} ${BONUS_OBJS}
			$(AR) ${NAME} $(OBJS) ${BONUS_OBJS}
endif

obj/%.o: %.c $(HEADER) Makefile
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@ 

bonus:
			@make BONUS=1 --no-print-directory

clean:		
			rm -rf obj

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus 
