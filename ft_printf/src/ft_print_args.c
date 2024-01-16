/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:46:18 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/16 20:46:21 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_print_args.h"
#include "../libft/libft.h"

void	ft_print_char(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	ft_putchar_fd(c, 1);
	tab->total_len += 1;
}

void	ft_print_str(t_print *tab)
{
	char	*s;

	s = va_arg(tab->args, char *);
	ft_putstr_fd(s, 1);
	if (s == NULL)
		tab->total_len += 6;
	else
		tab->total_len += (int)ft_strlen(s);
}

void	ft_print_int(t_print *tab)
{
	int	d;

	d = (int)va_arg(tab->args, int);
	ft_putnbr(d);
	tab->total_len += ft_number_len(d);
}

void	ft_print_uint(t_print *tab)
{
	unsigned int	d;

	d = (unsigned int)va_arg(tab->args, unsigned int);
	ft_putnbr(d);
	tab->total_len += ft_number_len(d);
}
