/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:03:13 by dhattie           #+#    #+#             */
/*   Updated: 2021/05/03 18:03:16 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int					ft_print_di(va_list arg);
int					ft_print_p(va_list arg);
int					ft_print_s(va_list arg);
int					ft_print_u(va_list arg);
int					ft_print_Xx(char **mass, va_list arg);
int					ft_printf(const char *format, ...);
int					ft_parsing_flags(char **mass, va_list arg);
int					ft_print_c(va_list arg);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_write (char *str);

#endif