/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:23:07 by nevaspid          #+#    #+#             */
/*   Updated: 2023/01/31 22:03:31 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man 3 stdarg
#include "ft_printf.h"

int	select_format(va_list args, const char *str, int i)
{

}

int ft_printf(const char *str, ...)
{
	int i;
	
	va_list args;

	i = 0;

	if (!str)
		return (null);
	while (str[i])
	{
		if (i == '%')
			i = select_format(args, *str, i);
		i++;
	}
	return (i);
}
