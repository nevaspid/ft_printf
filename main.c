/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:44:43 by nevaspid          #+#    #+#             */
/*   Updated: 2023/01/12 19:58:05 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int len;
	char *a = "je suis";
	len = ft_printf(a);
	printf("%d", len);
	printf("\n %d", printf(a));
}