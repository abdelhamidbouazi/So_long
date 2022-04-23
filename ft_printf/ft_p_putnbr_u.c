/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_putnbr_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:05:10 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/20 15:25:02 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p_putnbr_u(unsigned int n, int *count)
{
	if (n <= 9)
		ft_p_putchar(n + '0', count);
	else
	{
		ft_p_putnbr(n / 10, count);
		ft_p_putchar(n % 10 + '0', count);
	}
}
