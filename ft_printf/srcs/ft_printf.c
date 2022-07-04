/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:42:13 by msosnova          #+#    #+#             */
/*   Updated: 2021/07/15 14:44:27 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_ap (va_list ap, char format)
{
	if (format == 'c')
		return (ft_print_char (va_arg(ap, int)));
	if (format == 's')
		return (ft_print_line(va_arg(ap, char *)));
	if (format == 'p')
		return (ft_print_pointer(va_arg(ap, void *)));
	if (format == 'd' || format == 'i')
		return (ft_print_int_dec (va_arg(ap, int)));
	if (format == 'u')
		return (ft_print_u_dec (va_arg(ap, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_print_hexa (va_arg(ap, unsigned int), format));
	return (write (1, "%", 1));
}

int	ft_printf(const char *line_for_print, ...)
{
	int		j;
	va_list	ap;

	va_start(ap, line_for_print);
	j = 0;
	while (*line_for_print)
	{
		if (*line_for_print == '%')
		{
			j += print_ap (ap, *(++line_for_print));
			line_for_print++;
		}
		else
			j += write (1, line_for_print++, 1);
	}
	va_end (ap);
	return (j);
}
