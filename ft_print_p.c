/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:01:44 by dhattie           #+#    #+#             */
/*   Updated: 2021/07/12 22:01:46 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_convert(unsigned long num, int base, int count, char *str)
{
	unsigned long	tmp;

	while (num != 0)
	{
		tmp = num % base;
		if (tmp < 10)
			str[count - 1] = tmp + 48;
		else
			str[count - 1] = tmp + 87;
		num = num / base;
		count--;
	}
	return (str);
}

static int	ft_univarsal_base(unsigned long num, int base)
{
	unsigned long	tmp;
	int				count;
	char			*str;

	tmp = num;
	str = 0;
	count = 0;
	if (num == 0)
		return (ft_write("0x0") - 2);
	while (num != 0)
	{
		num = num / base;
		count++;
	}
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	str[count] = '\0';
	str = ft_convert(tmp, base, count, str);
	ft_write("0x");
	tmp = ft_write(str);
	free(str);
	return (tmp);
}

int	ft_print_p(va_list arg)
{
	unsigned long	address;
	int				i;

	address = va_arg(arg, unsigned long);
	i = ft_univarsal_base(address, 16);
	return (i + 2);
}
