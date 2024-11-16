/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:34:59 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/11/16 17:51:04 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	aux(int c)
{
	if (c == 'c')
	{
		
	}
	else if (c == 's')
	{

	}
	else if (c == 'p')
	{
		
	}
	else if (c == 'd')
	{

	}
	else if (c == 'i')
	{
		
	}
	else if (c == 'u')
	{

	}
	else if (c == 'x')
	{
		
	}
	else if (c == 'X')
	{

	}
	else if (c == '%')
	{
		
	}
}

int	ft_printf(const	char *src, ...)
{
	int	len;

	if (!src)
		return (-1);
	while (*src)
	{
		if (*src == '%')
			aux(src + 1);
		else if (*src)
			write(1, src, 1);
		*src++;
	}
}
