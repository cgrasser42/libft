/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:39:44 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 08:40:47 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(const char *str, char *char_set)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!ft_strchr(char_set, *str) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (ft_strchr(char_set, *str))
			in_word = 0;
		str++;
	}
	return (count);
}
