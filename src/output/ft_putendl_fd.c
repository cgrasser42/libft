/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:33:42 by cgrasser          #+#    #+#             */
/*   Updated: 2025/06/24 00:20:18 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	count;
	int	tmp;

	count = ft_putstr_fd(s, fd);
	if (count == -1)
		return (count);
	tmp = ft_putchar_fd('\n', fd);
	if (tmp == -1)
		return (tmp);
	return (count + tmp);
}
