/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 00:08:00 by cgrasser          #+#    #+#             */
/*   Updated: 2025/06/24 02:31:43 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file printf.h
 * @brief Header file declaring the ft_printf function.
 *
 * Provides a printf-like function that outputs formatted data
 * to a specified file descriptor.
 */

#ifndef PRINTF_H
# define PRINTF_H

/**
 * @brief
 * Outputs a formatted string to the given file descriptor.
 * 
 * This function behaves similarly to the standard printf,
 * but writes its output to the specified file descriptor `fd`.
 * It supports a subset of format specifiers:
 * - %c : character
 * - %s : string
 * - %p : pointer (hexadecimal with "0x" prefix)
 * - %d, %i : signed decimal integer
 * - %u : unsigned decimal integer
 * - %x : unsigned hexadecimal (lowercase)
 * - %X : unsigned hexadecimal (uppercase)
 * - %% : literal percent sign
 *
 * @param fd
 * File descriptor where the output will be written.
 * 
 * @param s
 * Format string containing characters and format specifiers.
 * 
 * @param ...
 * Variadic arguments corresponding to the format specifiers.
 * 
 * @return
 * The total number of characters written to the file descriptor,
 * or a negative value if an error occurs.
 */
int	ft_printf(int fd, const char *s, ...);

#endif /* PRINTF_H */
