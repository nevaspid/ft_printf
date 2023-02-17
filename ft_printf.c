/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:23:07 by nevaspid          #+#    #+#             */
/*   Updated: 2023/02/17 18:27:24 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man 3 stdarg
#include "ft_printf.h"

static int	select_format(va_list args, const char *str, int i)
{
	int len;

	len = 0;
	if (str[i] == '%')
		len += ft_putchar_pf('%');	
	else if (str[i] == 'c')
		len += ft_putchar_pf(va_arg(args, int));
	else if (str[i] == 's')
		write(1, "s", 1);
	else if (str[i] == 'u')
		write(1, "u", 1);
	else if (str[i] == 'x')
		write(1, "x", 1);
	else if (str[i] == 'X')
		write(1, "X", 1);
	else if (str[i] == 'p')
		write(1, "p", 1);
	else if (str[i] == 'd' || str[i] == 'i')
		len += ft_printf_di(va_arg(args, int));
	return (len);
}

int ft_printf(const char *str, ...)
{
	int i;
	int error;
	int count;
	
	va_list args;
	
	i = 0;
	error = 0;
	count = 0;

	va_start(args, str);
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
			count += select_format(args, str, ++i);
		else
			count += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
