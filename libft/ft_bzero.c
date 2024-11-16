/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:36:09 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/10/30 20:04:03 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = s;
	if (!n)
		return ;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	s = dest;
}