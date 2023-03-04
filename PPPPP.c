/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PPPPP.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:45:10 by gloms             #+#    #+#             */
/*   Updated: 2023/03/04 02:56:53 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr(unsigned long int nbr)
{
	int	count;

	count = 0;
	if (!nbr)
		count += 1;
	while (nbr)
	{
		nbr /= 16;
		count++;
	}
	return (count + 2); // pour 0x (faut malloc apres et tout print d'un coup)
}

static int	called_ft_printf_xmin(unsigned long int nbr)
{
	if (nbr < 10)
	{
		if (ft_putchar_pf(nbr + 48) < 0)
			return (-2147483648);
	}
	if (nbr >= 16)
	{
		if (ft_printf_p(nbr / 16) < 0)
			return (-2147483648);
		if (ft_printf_p(nbr % 16) < 0)
			return (-2147483648);
	}
	if (nbr >= 10 && nbr <= 15)
	{
		if (ft_putchar_pf(nbr + 87) < 0)
			return (-2147483648);
	}
	return (1);
}

int	ft_printf_p(unsigned long int nbr)
{
	if (called_ft_printf_xmin(nbr) < 0)
		return (-2147483648);
	return (len_nbr(nbr)); // il faudra return un strlen de la string malloc
}
