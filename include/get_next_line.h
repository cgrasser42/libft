/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:59:57 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 12:21:00 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file get_next_line.h
 * @brief Header file for the `get_next_line` function, which reads a line
 * from a file descriptor.
 *
 * This file contains the function prototype for `get_next_line` and necessary
 * helper functions, as well as the definition for the `BUFFER_SIZE` macro.
 */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/**
 * @def BUFFER_SIZE
 * @brief The default buffer size used in the `get_next_line` function.
 * 
 * The buffer size determines how many bytes are read at a time
 * from the file descriptor.
 * The default value is set to 1024, but this can be
 * modified during compilation.
 */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

/**
 * @brief Reads the next line from a file descriptor.
 * 
 * This function reads from the specified file descriptor and returns
 * the next line (up to and including the newline character).
 * The function maintains the reading state for each file descriptor
 * in a static buffer.
 * 
 * @param fd The file descriptor from which to read. It must be a valid
 * 			file descriptor.
 * @return A string containing the next line read from the file, or NULL
 * 			if an error occurs or if there is no more data to read.
 * 
 * @note If there is no newline character, the function will read up to the
 * 		`BUFFER_SIZE` specified and return the data. If `BUFFER_SIZE` is less
 * 		than or equal to zero, or if `fd` is invalid, the function 
 * 		will return NULL.
 * 
 * @warning The caller is responsible for freeing the memory allocated for
 * 			the returned string.
 */
char	*get_next_line(int fd);

/**
 * @brief Clears all lines from a file descriptor and closes it.
 *
 * This function reads all lines from the given file descriptor using the
 * `get_next_line` function, frees the memory allocated for each line, and
 * then closes the file descriptor. If the file descriptor is invalid
 * (negative), the function returns immediately without doing anything.
 *
 * @param fd The file descriptor to clear and close.
 * @note The function does not handle cases where the file descriptor is
 * 			invalid during the `get_next_line` call. It simply returns if
 * 			the descriptor is less than 0.
 */
void	ft_clear_fd(int fd);

#endif