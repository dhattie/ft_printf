/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:15:05 by dhattie           #+#    #+#             */
/*   Updated: 2021/07/12 22:15:06 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		write(1, str++, 1);
		i++;
	}
	return (i);
}
