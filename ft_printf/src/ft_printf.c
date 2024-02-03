/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <aggrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:16:19 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/25 13:09:22 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_print_args.h"
#include "../libft/libft.h"

int	ft_declare_init_structs(t_hex **hex, t_print **tab)
{
	*hex = (t_hex *)malloc(sizeof(t_hex));
	if (*hex == NULL)
		return (0);
	(*hex)->lowcase = ft_strdup("0123456789abcdef");
	(*hex)->upcase = ft_strdup("0123456789ABCDEF");
	*tab = (t_print *)malloc(sizeof(t_print));
	if (tab == NULL)
	{
		free((*hex)->lowcase);
		free((*hex)->upcase);
		free(*hex);
		return (0);
	}
	(*tab)->total_len = 0;
	return (1);
}

void	ft_free_structs(t_hex *hex, t_print *tab)
{
	free(hex->lowcase);
	free(hex->upcase);
	free(hex);
	free(tab);
}

void	ft_print_arg(t_print *tab, char type, t_hex *hexdigits)
{
	if (type == 'c')
		ft_print_char(tab);
	else if (type == 's')
		ft_print_str(tab);
	else if (type == 'd' || type == 'i')
		ft_print_int(tab);
	else if (type == 'u')
		ft_print_uint(tab);
	else if (type == 'p')
		ft_print_ptr(tab, hexdigits->lowcase);
	else if (type == 'x')
		ft_print_hex(tab, hexdigits->lowcase);
	else if (type == 'X')
		ft_print_hex(tab, hexdigits->upcase);
	else if (type == '%')
	{
		ft_putchar_fd('%', 1);
		tab->total_len += 1;
	}
	else
	{
		ft_putchar_fd(type, 1);
		tab->total_len += 1;
	}
}

int	ft_printf(const char *format, ...)
{
	t_hex	*hexdigits;
	t_print	*tab;
	int		return_len;
	int		i;

	if (!ft_declare_init_structs(&hexdigits, &tab))
		return (-1);
	va_start(tab->args, format);
	i = 0;
	return_len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_print_arg(tab, format[i + 1], hexdigits);
			i++;
		}
		else
			return_len += (int)write(1, format + i, 1);
		i++;
	}
	return_len += tab->total_len;
	ft_free_structs(hexdigits, tab);
	return (return_len);
}
