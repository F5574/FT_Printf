/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:17:27 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/11/16 16:34:53 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define EX_LOW_BASE "0123456789abcdef"
# define EX_LOW_BASE "0123456789ABCDEF"
# define POSSIBLE_FLAGS "cspdiuxX%"

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const	char *src, ...);

#endif