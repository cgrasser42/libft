/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:50:53 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 15:53:13 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file conversions_utils.h
 * @brief Header file providing utility functions for conversions between
 * different bases and integer parsing.
 *
 * This file contains the declarations of functions that convert strings to
 * integers based on a given base and vice versa, as well as the basic atoi
 * and itoa functions.
 */

#ifndef CONVERSION_UTILS_H
# define CONVERSION_UTILS_H

/**
 * @brief Converts a string to an integer based on the given base.
 * 
 * This function interprets the given string as a number in the specified
 * base and returns the corresponding integer value. It supports bases
 * from 2 to 16 (inclusive) and allows for both positive and negative numbers.
 * 
 * @param str The string to be converted. It must be a valid number in
 * 			the specified base.
 * @param base A string containing the base characters.
 * 			The base must be valid and contain at least two unique characters.
 * 
 * @return The integer representation of the string in the given base.
 *         	If the string is invalid or contains characters not present
 * 			in the base,the behavior is undefined.
 */
int		ft_atoi_base(const char *str, char *base);

/**
 * @brief Converts a string to an integer (base 10).
 * 
 * This function converts a string representing a decimal number (base 10) to
 * its corresponding integer value.
 * It handles optional whitespace characters, sign (`+` or `-`),
 * and numerical digits.
 * 
 * @param str The string to be converted. It must represent
 * 			a valid integer in base 10.
 * 
 * @return The integer representation of the string.
 *         If the string is invalid, the behavior is undefined.
 */
int		ft_atoi(const char *str);

/**
 * @brief Converts an integer to a string (base 10).
 * 
 * This function converts a given integer to a string representation in decimal
 * (base 10). It handles negative numbers by prepending a minus sign (`-`)
 * and correctly formats the result.
 * 
 * @param n The integer to be converted.
 * 
 * @return A string representation of the integer. The caller is responsible
 * 			for freeing the memory allocated for the result.
 */
char	*ft_itoa(int n);

#endif /* CONVERSIONS_UTILS_H */