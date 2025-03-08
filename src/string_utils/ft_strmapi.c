/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:42:05 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 08:42:11 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*to_return;
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	to_return = (char *)malloc(len + 1);
	if (!to_return)
		return (NULL);
	i = 0;
	while (s[i])
	{
		to_return[i] = f(i, s[i]);
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
