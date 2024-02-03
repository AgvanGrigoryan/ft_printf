/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:57:14 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/15 13:14:32 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINT_ARGS_H
# define FT_PRINT_ARGS_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <math.h>
# include "ft_printf.h"
# include "ft_printf_utils.h"

void	ft_print_char(t_print *tab);
void	ft_print_str(t_print *tab);
void	ft_print_ptr(t_print *tab, char *hexdigits);
void	ft_print_int(t_print *tab);
void	ft_print_uint(t_print *tab);
void	ft_print_hex(t_print *tab, char *hexdigits);

#endif
