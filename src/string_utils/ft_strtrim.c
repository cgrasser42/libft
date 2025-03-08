/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:36:52 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 08:37:06 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	if (i == size)
		return (ft_strdup(""));
	j = size - 1;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
