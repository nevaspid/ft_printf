/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:23:07 by nevaspid          #+#    #+#             */
/*   Updated: 2023/02/04 17:47:53 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man 3 stdarg
#include "ft_printf.h"

static int	select_format(va_list args, const char *str, int i)
{
	int len;

	len = 0;
	if (str[i] == '%')
		return (0);
	if (str[i] == 'c')
		write(1, "c", 1);
	if (str[i] == 's')
		write(1, "s", 1);
	if (str[i] == 'u')
		write(1, "u", 1);
	if (str[i] == 'x')
		write(1, "x", 1);
	if (str[i] == 'X')
		write(1, "X", 1);
	if (str[i] == 'p')
		write(1, "p", 1);
	if (str[i] == 'd' || str[i] == 'i')
		write(1, "di", 2);
	else
		i++;
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
		if (str[i++] == '%')
			count += select_format(args, str, i);
	}
	va_end(args);
	return (count);
}
