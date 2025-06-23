/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:35:08 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 08:35:36 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsjoin(const char **strs)
{
	char	*join;
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (strs[i])
		len += ft_strlen(strs[i++]);
	join = malloc((len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	len = 0;
	while (strs[i])
	{
		ft_strcpy(join + len, strs[i]);
		len += ft_strlen(strs[i]);
		i++;
	}
	return (join);
}
