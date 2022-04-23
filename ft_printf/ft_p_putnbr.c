/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:06:20 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/20 15:24:31 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p_putnbr(int n, int *count)
{
	long	x;

	x = n;
	if (x < 0)
	{
		ft_p_putchar('-', count);
		x *= -1;
	}
	if (x <= 9)
		ft_p_putchar(x + '0', count);
	else
	{
		ft_p_putnbr(x / 10, count);
		ft_p_putchar(x % 10 + '0', count);
	}
}
