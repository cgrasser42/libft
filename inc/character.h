/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:25:05 by cgrasser          #+#    #+#             */
/*   Updated: 2025/06/23 23:59:32 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file character.h
 * @brief Header file providing utility functions for character manipulation.
 *
 * This file contains the declarations of functions that are used for checking
 * and manipulating character properties such as alphanumeric, digit, or space,
 * as well as converting characters to uppercase or lowercase.
 */

#ifndef CHARACTER_H
# define CHARACTER_H

/**
 * @brief Checks if a character is an alphabetic letter (A-Z or a-z).
 * 
 * This function checks if the character `c` is an alphabetic letter.
 * It returns true if `c` is between 'A' and 'Z' or 'a' and 'z',
 * otherwise it returns false.
 * 
 * @param c The character to be checked.
 * 
 * @return True if the character is an alphabetic letter, false otherwise.
 */
bool	ft_isalpha(int c);

/**
 * @brief Checks if a character is a digit (0-9).
 * 
 * This function checks if the character `c` is a digit (0-9).
 * 
 * @param c The character to be checked.
 * 
 * @return True if the character is a digit, false otherwise.
 */
bool	ft_isdigit(int c);

/**
 * @brief Checks if a character is a hexadecimal letter (a-f).
 *
 * This function returns true if the character `c` is a valid
 * hexadecimal letter (uppercase or lowercase).
 *
 * @param c The character to be checked.
 *
 * @return True if the character is a hexadecimal letter, false otherwise.
 */
bool	ft_ishexa_lower(int c);

/**
 * @brief Checks if a character is a hexadecimal letter (A-F).
 *
 * This function returns true if the character `c` is a valid
 * hexadecimal letter (uppercase or lowercase).
 *
 * @param c The character to be checked.
 *
 * @return True if the character is a hexadecimal letter, false otherwise.
 */
bool	ft_ishexa_upper(int c);

/**
 * @brief Checks if a character is alphanumeric (A-Z, a-z, 0-9).
 * 
 * This function checks if the character `c` is either
 * a letter (alphabetic) or a digit.
 * 
 * @param c The character to be checked.
 * 
 * @return True if the character is alphanumeric, false otherwise.
 */
bool	ft_isalnum(int c);

/**
 * @brief Checks if a character is an ASCII character.
 * 
 * This function checks if the character `c` is a valid ASCII character
 * (i.e., between 0 and 127 inclusive).
 * 
 * @param c The character to be checked.
 * 
 * @return True if the character is an ASCII character, false otherwise.
 */
bool	ft_isascii(int c);

/**
 * @brief Checks if a character is printable.
 * 
 * This function checks if the character `c` is a printable character,
 * i.e., it is not a control character and can be displayed on the screen.
 * 
 * @param c The character to be checked.
 * 
 * @return True if the character is printable, false otherwise.
 */
bool	ft_isprint(int c);

/**
 * @brief Checks if a character is a whitespace character.
 * 
 * This function checks if the character `c` is a whitespace character,
 * which includes space (' '), tab ('\t'), newline ('\n'), carriage
 * return ('\r'), vertical tab ('\v'), and form feed ('\f').
 * 
 * @param c The character to be checked.
 * 
 * @return True if the character is a whitespace character, false otherwise.
 */
bool	ft_isspace(int c);

/**
 * @brief Converts a character to uppercase.
 * 
 * This function converts the character `c` to its uppercase equivalent.
 * If the character is already uppercase or is not an alphabetic letter,
 * the function returns the character unchanged.
 * 
 * @param c The character to be converted.
 * 
 * @return The uppercase equivalent of the character, or the character itself
 * if it is already uppercase or not a letter.
 */
int		ft_toupper(int c);

/**
 * @brief Converts a character to lowercase.
 * 
 * This function converts the character `c` to its lowercase equivalent.
 * If the character is already lowercase or is not an alphabetic letter,
 * the function returns the character unchanged.
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase equivalent of the character, or the character itself
 * if it is already lowercase or not a letter.
 */
int		ft_tolower(int c);

#endif /* CHARACTER_H */