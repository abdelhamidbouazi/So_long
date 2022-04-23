/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:43:23 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/20 20:35:39 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	hexa_1(long unsigned int n, int *count)
{
	if (n <= 15)
	{
		write (1, &"0123456789abcdef"[n], 1);
		(*count)++;
	}
	else
	{
		hexa_1(n / 16, count);
		write (1, &"0123456789abcdef"[n % 16], 1);
		(*count)++;
	}
}

void	ft_printf_void(void *p, int *count)
{
	unsigned long int	i;

	i = (unsigned long int)p;
	write (1, "0x", 2);
	(*count) += 2;
	hexa_1(i, count);
}
