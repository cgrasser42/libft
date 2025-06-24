/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:35:25 by cgrasser          #+#    #+#             */
/*   Updated: 2025/06/24 01:39:21 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_base_recur(unsigned long long nb,
	char *base, int meta[2], int fd)
{
	if (nb >= (unsigned long long)meta[1])
	{
		ft_putnbr_base_recur(nb / meta[1], base, meta, fd);
		ft_putnbr_base_recur(nb % meta[1], base, meta, fd);
	}
	else
		meta[0] += ft_putchar_fd(base[nb], fd);
}

int	ft_putnbr_base_fd(long long nb, char *base, int fd)
{
	int	meta[2];

	meta[0] = 0;
	meta[1] = ft_strlen(base);
	if (nb < 0)
	{
		meta[0] += ft_putchar_fd('-', fd);
		ft_putnbr_base_recur((unsigned long long)(-(nb + 1)) + 1,
			base, meta, fd);
	}
	else
		ft_putnbr_base_recur((unsigned long long)nb, base, meta, fd);
	return (meta[0]);
}
