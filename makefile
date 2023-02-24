# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 17:42:58 by gloms             #+#    #+#              #
#    Updated: 2023/02/24 17:45:20 by gloms            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+= ft_printf.c
SRCS		+= ft_putchar_pf.c
SRCS		+= ft_printf_str.c
SRCS		+= ft_printf_X.c
SRCS		+= ft_printf_xmin.c
SRCS		+= ft_printf_diu.c


#	=== FLAGS ===
CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror
CFLAGS		+= -g
CFLAGS		+= -c

#	=== KEYS WORDS ===
NAME		= ft_printf.a

OBJS		= $(SRCS:.c=.o)

#	=== COMMANDES ===

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $@ $^

clean:
				@rm -f $(OBJS) $(OBJS_BONUS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all