/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:45:05 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/20 18:49:56 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check(va_list ap, char c, int *count)
{
	if (c == 'c')
		ft_p_putchar(va_arg(ap, int), count);
	else if (c == 'd' || c == 'i')
		ft_p_putnbr(va_arg(ap, int), count);
	else if (c == 'u')
		ft_p_putnbr_u(va_arg(ap, unsigned int), count);
	else if (c == '%')
		ft_p_putchar(c, count);
	else if (c == 's')
		ft_p_putstr(va_arg(ap, char *), count);
	else if (c == 'p')
		ft_printf_void(va_arg(ap, void *), count);
	else if (c == 'x' || c == 'X')
		ft_printf_hexa(va_arg(ap, unsigned int), c, count);
	else
		ft_p_putchar(c, count);
}
