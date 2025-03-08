/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:33:07 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 08:33:23 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*to_return;
	size_t	size;

	size = ft_strlen(s);
	to_return = ft_calloc(size + 1, sizeof(char));
	if (!to_return)
		return (NULL);
	ft_memcpy(to_return, s, size);
	return (to_return);
}
