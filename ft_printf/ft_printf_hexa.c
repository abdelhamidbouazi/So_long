/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:47:59 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/20 18:28:01 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hexa(unsigned int n, char c, int *count)
{
	if (n <= 15)
	{
		if (c == 'x')
			write (1, &"0123456789abcdef"[n], 1);
		else if (c == 'X')
			write (1, &"0123456789ABCDEF"[n], 1);
		(*count)++;
	}
	else
	{
		ft_printf_hexa(n / 16, c, count);
		if (c == 'x')
			write (1, &"0123456789abcdef"[n % 16], 1);
		else if (c == 'X')
			write (1, &"0123456789ABCDEF"[n % 16], 1);
		(*count)++;
	}
}
