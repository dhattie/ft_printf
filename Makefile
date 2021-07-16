# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhattie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 20:34:30 by dhattie           #+#    #+#              #
#    Updated: 2021/06/15 20:34:35 by dhattie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a

SRC     =   ft_print_s.c	ft_printf.c			ft_print_p.c\
		    ft_putnbr_fd.c	ft_putchar_fd.c		ft_putstr_fd.c\
		    ft_print_Xx.c	ft_print_di.c		ft_print_u.c\
		    ft_write.c

OBJ = $(patsubst %.c, %.o,$(SRC))

FLAG = -Wall -Werror -Wextra

all : $(NAME)
$(NAME) : $(OBJ)
	ar rcs $(NAME) $?
%.o : %.c ft_printf.h
	gcc $(FLAGS) -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

test :
	gcc -g -fsanitize=address -Wall -Werror -Wextra main.c ft_print_s.c ft_printf.c ft_printf.h ft_print_p.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_print_Xx.c ft_print_di.c ft_print_u.c ft_write.c  && ./a.out

.PHONY : all clean fclean re test




