/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:35:25 by cgrasser          #+#    #+#             */
/*   Updated: 2025/05/17 06:49:51 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_base_recur(long long nb, char *base, int base_len, int fd)
{
	if (nb >= base_len)
	{
		ft_putnbr_base_recur(nb / base_len, base, base_len, fd);
		ft_putnbr_base_recur(nb % base_len, base, base_len, fd);
	}
	else
		ft_putchar_fd(base[nb], fd);
}

void	ft_putnbr_base_fd(long long nb, char *base, int fd)
{
	int	base_len;

	if (nb == LLONG_MIN)
		ft_putstr_fd("-9223372036854775808", fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb *= -1;
		}
		base_len = ft_strlen(base);
		ft_putnbr_base_recur(nb, base, base_len, fd);
	}
}
