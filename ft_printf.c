/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:35:52 by dhattie           #+#    #+#             */
/*   Updated: 2021/06/15 20:35:58 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(va_list arg)
{
	int		len_mass;
	char	c;

	c = (char) va_arg(arg, int);
	len_mass = write(1, &c, 1);
	return (len_mass);
}

int	ft_parsing_flags(char **mass, va_list arg)
{
	int	nb;

	nb = 0;
	if (**mass == 'd' || **mass == 'i')
		nb = ft_print_di(arg);
	if (**mass == 'c')
		nb = ft_print_c(arg);
	if (**mass == 's')
		nb = ft_print_s(arg);
	if (**mass == 'p')
		nb = ft_print_p(arg);
	if (**mass == 'u')
		nb = ft_print_u(arg);
	if (**mass == 'X' || **mass == 'x')
		nb = ft_print_Xx(mass, arg);
	if (**mass == '%')
		nb = write(1, "%", 1);
	if ((ft_strchr("cspdiuxX%", **mass)) == NULL)
		return (0);
	(*mass)++;
	return (nb);
}

int	ft_printf(const char *format, ...)
{
	int			lenght;
	char		*mass;
	va_list		arg;

	lenght = 0;
	mass = (char *)format;
	va_start(arg, format);
	if (mass == NULL)
		return (0);
	while (*mass)
	{
		if (*mass == '%')
		{
			mass++;
			lenght = lenght + ft_parsing_flags(&mass, arg);
		}
		if (*mass && *mass != '%')
			lenght = lenght + write(1, mass++, 1);
	}
	va_end(arg);
	return (lenght);
}
