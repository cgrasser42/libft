/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 01:42:27 by cgrasser          #+#    #+#             */
/*   Updated: 2025/06/24 02:30:37 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_string(char *s, int fd)
{
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	return (ft_putstr_fd(s, fd));
}

int	handle_pointer(unsigned long int ptr, int fd)
{
	int	count;

	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	count = ft_putstr_fd("0x", fd);
	return (count + ft_putnbr_base_fd(ptr, "0123456789abcdef", fd));
}

static int	handle_format(va_list args, char format, int fd)
{
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), fd));
	if (format == 's')
		return (handle_string(va_arg(args, char *), fd));
	if (format == 'p')
		return (handle_pointer((unsigned long int)va_arg(args, void *), fd));
	if (format == 'd' || format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), fd));
	if (format == 'u')
		return (ft_putnbr_base_fd((long long)va_arg(args, unsigned int),
				"0123456789", fd));
	if (format == 'x')
		return (ft_putnbr_base_fd((long long)va_arg(args, unsigned long),
				"0123456789abcdef", fd));
	if (format == 'X')
		return (ft_putnbr_base_fd((long long)va_arg(args, unsigned long),
				"0123456789ABCDEF", fd));
	if (format == '%')
		return (ft_putchar_fd('%', fd));
	return (0);
}

int	ft_printf(int fd, const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			len += handle_format(args, s[i], fd);
		}
		else
			len += ft_putchar_fd(s[i], fd);
		i++;
	}
	va_end(args);
	return (len);
}
