/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:46:06 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/11 15:20:10 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*s_dup;
	size_t	i;

	i = 0;
	s_len = 0;
	while (s[s_len])
		s_len++;
	s_dup = (char *)malloc(s_len + 1);
	if (s_dup == NULL)
		return (NULL);
	while (i <= s_len && s[i])
	{
		s_dup[i] = s[i];
		i++;
	}
	s_dup[i] = 0;
	return (s_dup);
}
