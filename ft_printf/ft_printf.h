/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:17:19 by mel-khar          #+#    #+#             */
/*   Updated: 2021/12/20 22:09:23 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	check(va_list ap, char c, int *count);
void	ft_p_putchar(char c, int *count);
void	ft_p_putnbr_u(unsigned int n, int *count);
void	ft_p_putstr(char *s, int *count);
void	ft_printf_void(void *p, int *count);
void	ft_p_putnbr(int n, int *count);
void	ft_printf_hexa(unsigned int n, char c, int *count);
int		ft_printf(const char *str, ...);
#endif
