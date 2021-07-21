/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:50:06 by dhattie           #+#    #+#             */
/*   Updated: 2021/07/16 17:50:08 by dhattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#define PRINT "%%p%p"

int	main()
{
//	int	res1;
//	int	res2;

//	res1 = printf(PRINT);
//	printf("  |original %i", res1);
//	printf("\n=======\n");
//	res2 = ft_printf(PRINT);
//	printf("  |my %i\n", res2);
	//while(1);

	ft_printf("|ft_printf = |%i", ft_printf(PRINT));

	printf("\n=======\n");

 	//printf("|printf = |%i", printf(PRINT));

	return (0);
}
