/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:43:31 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/16 20:43:38 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf_utils.h"
#include "../libft/libft.h"

int	ft_number_len(long long num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	num /= 10;
	len++;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

void	ft_putnbr(long long n)
{
	if (n == INT_MIN)
	{
		ft_putnbr(n / 10);
		n = -(n % 10);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar_fd('0' + (n % 10), 1);
	}
	else
		ft_putchar_fd('0' + n, 1);
}
