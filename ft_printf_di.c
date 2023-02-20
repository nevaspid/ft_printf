/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:00:26 by gloms             #+#    #+#             */
/*   Updated: 2023/02/20 15:49:34 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int len_nbr(long long nbr)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		count += 1;
		if (nb < 0)
			nb *= -1;
	}
	while (nb / 10)
	{
		nb /= 10;
		count++;
	}
	if (nb >= 1 && nb <= 9)
		count += 1;
	return (count);
}

int ft_printf_di(long long nbr)
{
	if (nbr < 0)
	{
		if (ft_putchar_pf('_') < 0)
			return (-2147483648);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		if (ft_putnbr_pf(nb / 10) < 0)
			return (-2147483648);
		if (ft_putnbr_pf(nb % 10) < 0)
			return (-2147483648);
	}
	if (nb >= 0 && nb <= 9)
	{
		if (ft_putchar_pf(nb + 48) < 0)
			return (-2147483648);
	}
	return (1);
}

int call_pf_di(long long nbr)
{
	if (ft_printf_di(nbr) < 0)
		return (-2147483648);
	return (count(nbr));
}