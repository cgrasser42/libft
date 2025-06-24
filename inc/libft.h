/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:28:48 by cgrasser          #+#    #+#             */
/*   Updated: 2025/06/24 02:13:01 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file libft.h
 * @brief Main header file for the Libft project.
 *
 * This file includes the main header file for the Libft project,
 * which aggregates all the necessary utility headers for various functionalities
 * such as memory management, string manipulation, linked lists, input/output,
 * character checks, and conversions. It serves as a central file to include
 * all necessary headers for working with
 * the Libft library.
 *
 * The file includes the following modules:
 * - Linked List Utilities
 * - String Utilities
 * - Memory Utilities
 * - Get Next Line (GNL)
 * - Output Utilities
 * - Conversion Utilities
 * - Character Utilities
 *
 * By including this file, all essential utility functions from different
 * modules are available for use.
 */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>      /**< Standard library for memory allocation.*/
# include <unistd.h>      /**< Standard library for system calls. */
# include <limits.h>      /**< Provides constants for integer limits. */
# include <stdbool.h>     /**< Provides the bool type. */
# include <stdio.h>
# include <stdarg.h>

/**< Functions and structures for working with linked lists. */
# include "linked_list.h"

/**< Functions for string manipulation. */
# include "string.h"

/**< Functions for memory management. */
# include "memory.h"

/**< Function for reading a line from a file or input stream. */
# include "get_next_line.h"

/**< Functions for output operations. */
# include "output.h"

/**< Functions for converting numbers and strings in different bases. */
# include "conversion.h"

/**< Functions for character checking and manipulation. */
# include "character.h"

# include "printf.h"

#endif /* LIBFT_H */