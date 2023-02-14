/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:01:15 by nevaspid          #+#    #+#             */
/*   Updated: 2023/02/14 17:43:45 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int i;
	
	i = 0;
	if (!str)
		return (ft_printf_str("(null)"));
	while (str[i])
	{
		ft_putchar_pf(str[i++]);
	}
	return (i);
}
