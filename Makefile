# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otoufah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 22:09:32 by otoufah           #+#    #+#              #
#    Updated: 2021/12/08 22:09:37 by otoufah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

CC = gcc

AR = ar rcs

FUNCTIONS = ft_printf.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_intlen.c\
			ft_putunnbr.c\
			ft_unlen.c\
			ft_putaddup.c\
			ft_putaddlow.c\
			ft_hexlen.c\

OBJECTS = $(FUNCTIONS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)	
	@echo "PRINTF CREATED SUCCESSFULLY"

clean :
	@$(RM) $(OBJECTS)
	@echo "ALL OBJECTS HAS BEEN DELETED"

fclean : clean
	@$(RM) $(NAME)
	@echo "           REMOVED"

re : fclean all

.PHONY : clean fclean re all
