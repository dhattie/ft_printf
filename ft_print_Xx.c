/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_Xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:30:55 by dhattie           #+#    #+#             */
/*   Updated: 2021/07/16 17:30:57 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert_X(unsigned long num, int count, char *str, char
**mass)
{
	unsigned long	tmp;
	int				i;

	i = 0;
	if (**mass == 'x')
		i = 32;
	while (num != 0)
	{
		tmp = num % 16;
		if (tmp < 10)
			str[count - 1] = tmp + 48;
		else
			str[count - 1] = tmp + 55 + i;
		num = num / 16;
		count--;
	}
}

static int	ft_univarsal_base_x(unsigned long num, char **mass)
{
	unsigned long	tmp;
	int				count;
	char			*str;
	int				i;

	tmp = num;
	str = 0;
	count = 0;
	if (num == 0)
		return (ft_write("0"));
	while (num != 0)
	{
		num = num / 16;
		count++;
	}
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	str[count] = '\0';
	ft_convert_X(tmp, count, str, mass);
	i = ft_write(str);
	free(str);
	str = NULL;
	return (i);
}

int	ft_print_Xx(char **mass, va_list arg)
{
	unsigned long	address;
	int				i;

	address = va_arg(arg, unsigned int);
	i = ft_univarsal_base_x(address, mass);
	return (i);
}
