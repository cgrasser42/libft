/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:00:57 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 15:20:27 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, char *base)
{
	int	i;
	int	sgn;
	int	to_return;
	int	size_base;

	i = 0;
	sgn = 1;
	to_return = 0;
	size_base = ft_strlen(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn *= -1;
		i++;
	}
	while (ft_strchr(base, str[i]) && str[i])
		to_return = to_return * size_base + ft_get_index_base(str[i++], base);
	return (to_return * sgn);
}
