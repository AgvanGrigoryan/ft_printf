/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:46:26 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/16 20:46:29 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_print_args.h"
#include "../libft/libft.h"
#define BUFFER_SIZE 20
#define HEX_SIZE 17

int	ft_puthex(unsigned long num, char *hexdigits)
{
	char	buffer[BUFFER_SIZE];
	int		i;

	buffer[BUFFER_SIZE - 1] = '\0';
	i = BUFFER_SIZE - 2;
	buffer[i] = hexdigits[num % 16];
	num /= 16;
	i--;
	while (num != 0)
	{
		buffer[i] = hexdigits[num % 16];
		num /= 16;
		i--;
	}
	ft_putstr_fd(buffer + i + 1, 1);
	return (BUFFER_SIZE - i - 2);
}

void	ft_print_ptr(t_print *tab, char *hexdigits)
{
	unsigned long	p;

	p = (unsigned long)va_arg(tab->args, unsigned long);
	ft_putstr_fd("0x", 1);
	tab->total_len += (ft_puthex(p, hexdigits) + 2);
}

void	ft_print_hex(t_print *tab, char *hexdigits)
{
	unsigned int	p;

	p = (unsigned int)va_arg(tab->args, unsigned int);
	tab->total_len += ft_puthex(p, hexdigits);
}
