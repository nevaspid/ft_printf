/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:26:27 by nevaspid          #+#    #+#             */
/*   Updated: 2023/02/25 19:43:10 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *, ...);
int	ft_putchar_pf(int c);
int ft_printf_diu(long long nbr);
int	ft_printf_str(char *str);
int ft_printf_X(unsigned int nbr);
int ft_printf_xmin(unsigned long int nbr);

#endif