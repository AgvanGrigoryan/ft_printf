/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:46:55 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/16 20:46:57 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H

# include <limits.h>
# include <stddef.h>

void	ft_putnbr(long long n);
int		ft_number_len(long long num);
#endif //FT_PRINTF_UTILS_H
