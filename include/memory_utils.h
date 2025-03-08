/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:46:54 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 13:11:04 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file memory_utils.h
 * @brief Collection of memory manipulation functions.
 * 
 * This header file contains a set of utility functions to perform various
 * memory operations. These functions include setting, copying, moving,
 * comparing memory regions, clearing memory, and allocating memory.
 * They are designed to work with raw memory buffers and facilitate efficient
 * memory handling in C.
 */

#ifndef MEMORY_UTILS_H
# define MEMORY_UTILS_H

# include "libft.h"

/**
 * @brief Fills a block of memory with a specific value.
 * 
 * This function fills the first `n` bytes of the memory area pointed to by
 * `s` with the constant byte value `c`. It is commonly used to initialize
 * memory or set memory to a specific value.
 * 
 * @param s A pointer to the memory block to be filled.
 * @param c The value to set in the memory block.
 * @param n The number of bytes to set.
 * @return A pointer to the memory block `s`.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Sets a block of memory to zero.
 * 
 * This function sets the first `n` bytes of the memory area pointed to by
 * `s` to zero. It is commonly used to clear or initialize memory.
 * 
 * @param s A pointer to the memory block to be cleared.
 * @param n The number of bytes to clear.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Copies memory from one location to another.
 * 
 * This function copies `n` bytes from the memory area pointed to by `src`
 * to the memory area pointed to by `dest`. The memory areas must not
 * overlap. If they do, the behavior is undefined.
 * 
 * @param dest A pointer to the destination memory block.
 * @param src A pointer to the source memory block.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory block `dest`.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Moves memory from one location to another.
 * 
 * This function copies `n` bytes from the memory area pointed to by `src`
 * to the memory area pointed to by `dest`, handling overlapping memory 
 * areas safely. The source and destination memory blocks may overlap,
 * and the function ensures correct copying in such cases.
 * 
 * @param dest A pointer to the destination memory block.
 * @param src A pointer to the source memory block.
 * @param n The number of bytes to move.
 * @return A pointer to the destination memory block `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Locates the first occurrence of a byte in memory.
 * 
 * This function searches for the first occurrence of the byte `c` in
 * the memory block pointed to by `s`, within the first `n` bytes. 
 * It returns a pointer to the found byte, or `NULL` if the byte is
 * not found within the given range.
 * 
 * @param s A pointer to the memory block to search.
 * @param c The byte to search for.
 * @param n The number of bytes to search.
 * @return A pointer to the first occurrence of `c`, or `NULL` if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares two memory blocks.
 * 
 * This function compares the first `n` bytes of memory areas `s1`
 * and `s2`. It returns a value indicating whether the memory blocks are
 * equal, or if one is greater or less than the other.
 * 
 * @param s1 A pointer to the first memory block.
 * @param s2 A pointer to the second memory block.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero, depending
 * on whether the first `n` bytes of `s1` are less than, equal to, or
 * 			greater than those of `s2`.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Allocates memory and sets it to zero.
 * 
 * This function allocates memory for an array of `nmemb` elements, each
 * of size `size`, and initializes the entire block to zero.
 * It is commonly used when allocating memory for arrays and structures,
 * ensuring that all memory is zeroed out before use.
 * 
 * @param nmemb The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory block,
 * 			or `NULL` if the allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size);

#endif