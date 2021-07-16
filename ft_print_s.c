/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:53:13 by dhattie           #+#    #+#             */
/*   Updated: 2021/06/18 19:53:15 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(va_list arg)
{
	char	*str;
	int		len_str;

	len_str = 0;
	str = (char *)va_arg(arg, char *);
	if (!str)
		return (write(1, "(null)", 6));
	while (*str != 0)
		len_str = len_str + write(1, str++, 1);
	return (len_str);
}
