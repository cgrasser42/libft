/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:24:12 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 10:24:25 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*to_return;
	size_t	bytes;

	bytes = nmemb * size;
	if (size != 0 && nmemb > (-1 / size))
		return (NULL);
	to_return = (void *)malloc(bytes);
	if (to_return == NULL)
		return (NULL);
	ft_bzero(to_return, bytes);
	return (to_return);
}
