/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:06:55 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/20 22:15:47 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start (ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			check(ap, str[i], &count);
		}
		else
			ft_p_putchar(str[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
