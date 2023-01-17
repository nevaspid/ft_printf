/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:23:07 by nevaspid          #+#    #+#             */
/*   Updated: 2023/01/16 19:39:47 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man 3 stdarg
#include "ft_printf.h"

int	conditions(va_list args, const char *str, int i)
{

}

int ft_printf(const char *str, ...)
{
	int len;

	len = 0;

	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
