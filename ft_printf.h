/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:17:27 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/11/18 17:04:26 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define EX_LOW_BASE "0123456789abcdef"
# define EX_UP_BASE "0123456789ABCDEF"
# define POSSIBLE_FLAGS "cspdiuxX%"

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const	char *src, ...);
int	aux_putbs(long num, char *bs, int tt);
int	aux_putpt(unsigned long int num, char *bs, int tt);
int	aux_putnbr(int num, int tt);
int	aux_putunbr(unsigned int num, int tt);
int	ft_putchar(char c);

#endif