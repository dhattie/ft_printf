/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:54:00 by dhattie           #+#    #+#             */
/*   Updated: 2021/07/12 22:54:01 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len_int(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			i++;
		}
		while (n >= 10)
		{
			n = n / 10;
			i++;
		}
	}
	return (i + 1);
}

int	ft_print_di(va_list arg)
{
	int	i;
	int	j;

	i = va_arg(arg, int);
	ft_putnbr_fd(i, 1);
	j = ft_len_int(i);
	return (j);
}
