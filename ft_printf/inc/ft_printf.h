/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <aggrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:16:47 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/25 13:33:03 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_printf_utils.h"

typedef struct s_print
{
	va_list	args;		// arg to print out
	int		total_len;	// total length (return value)
}	t_print;

typedef struct s_hex
{
	char	*lowcase;
	char	*upcase;
}	t_hex;

int		ft_printf(const char *format, ...);
void	ft_print_arg(t_print *tab, char type, t_hex *hexdigits);
int		ft_declare_init_structs(t_hex **hex, t_print **tab);
void	ft_free_structs(t_hex *hex, t_print *tab);

#endif //FT_PRINTF_H
