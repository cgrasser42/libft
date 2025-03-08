/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:14:17 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 09:52:09 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
# define STRING_UTILS_H

# include "libft.h"

/**
 * @file ft_string_functions.h
 * @brief Collection of functions for manipulating strings.
 * 
 * This header file contains a set of utility functions designed to perform 
 * various operations on strings. These functions include string manipulation,
 * searching, comparison, memory allocation, and more. The functions are
 * intended to provide a simplified and customizable
 * set of tools for working with strings in C. 
 */

/**
 * @brief Splits a string into substrings separated by
 * characters from a given set.
 * 
 * This function allocates an array of strings and splits the string `s` into
 * multiple substrings. Each substring is a sequence of characters not separated
 * by the characters in `char_set`.
 * 
 * @param s The string to be split.
 * @param char_set The set of delimiter characters.
 * @return An array of strings, where each string is a substring obtained after
 * splitting. If an error occurs (such as a memory allocation failure),
 * 			the function returns NULL.
 */
char	**ft_split(char const *s, char *char_set);

/**
 * @brief Finds the first occurrence of a character in a string.
 * 
 * This function searches for the first occurrence of the character `c` in the
 * string `s`. If the character is found, a pointer to its position in the
 * string is returned. If the character is not found, the function returns NULL.
 * 
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character `c` in the string
 * 			`s`, or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Compares two strings lexicographically.
 * 
 * This function compares the two strings `s1` and `s2` character by character.
 * The comparison is done in a lexicographical order, meaning that the function
 * checks the difference between the first unmatched characters. 
 * It returns a negative value if `s1` is lexicographically smaller than `s2`,
 * a positive value if `s1` is greater than `s2`, and 0 if the strings are equal.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return An integer less than, equal to, or greater than zero, depending on
 * whether `s1` is lexicographically less than, equal to, or greater than `s2`.
 */
int		ft_strcmp(const char *s1, const char *s2);

/**
 * @brief Counts the number of words in a string based on a set of delimiters.
 * 
 * This function counts how many words are present in the string `str`, where
 * a word is defined as a sequence of characters that is not delimited by any
 * character present in `char_set`. The function assumes that words are
 * separated by characters from `char_set`, and it returns
 * the total number of words.
 * 
 * @param str The string to be analyzed.
 * @param char_set The set of delimiter characters.
 * @return The number of words in the string `str` based on
 * 			the delimiters in `char_set`.
 */
int		ft_strcount(const char *str, char *char_set);

/**
 * @brief Duplicates a string by allocating memory and copying the content.
 * 
 * This function allocates a new memory block large enough to hold a copy of
 * the string `s` (including the null terminator) and then copies the content
 * of `s` into the newly allocated memory. If the memory allocation fails, the
 * function returns NULL.
 * 
 * @param s The string to be duplicated.
 * @return A pointer to the newly allocated memory containing the duplicate
 * 			of `s`, or NULL if the memory allocation fails.
 */
char	*ft_strdup(const char *s);

/**
 * @brief Applies a function to each character of a string, with
 * the character's index.
 * 
 * This function iterates over each character of the string `s`, applying the
 * function `f` to each character. The function `f` is called with the index of
 * the character and a pointer to the character itself as arguments.
 * 
 * @param s The string on which the function is to be applied.
 * @param f The function to apply to each character of the string. It takes the
 * 			index of the character and a pointer to the character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Concatenates two strings into a newly allocated string.
 * 
 * This function concatenates the strings `s1` and `s2` into a new string.
 * The new string is dynamically allocated and contains the content of `s1`
 * followed by the content of `s2`. The function returns a pointer to the newly
 * allocated string.
 * 
 * @param s1 The first string to concatenate.
 * @param s2 The second string to concatenate.
 * @return A pointer to the newly allocated string containing the concatenated
 * 			result of `s1` and `s2`, or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Appends a string to another string with a specified maximum size.
 * 
 * This function appends the string `src` to the string `dst` but ensures that
 * the total length of `dst` does not exceed `size` characters.
 * It will copy at most `size - 1` characters from `src` to `dst`, and then
 * null-terminate the result. If `size` is less than or equal to the current
 * lengthof `dst`, no characters will be appended, and `dst`
 * will remain unchanged.
 * The function returns the total length of the string it tried to create, 
 * which is the sum of the initial length of `dst` and the length of `src`.
 * 
 * @param dst The destination string where `src` will be appended.
 * @param src The source string to append to `dst`.
 * @param size The maximum size of the resulting string.
 * @return The total length of the string that would be created if enough space
 * 			was available (the initial length of `dst` + the length of `src`).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Copies a string into a destination buffer with
 * a specified maximum size.
 * 
 * This function copies the string `src` into the destination buffer `dst`,
 * ensuring that no more than `size - 1` characters are copied to prevent buffer
 * overflow. It null-terminates the result by placing a `'\0'` character at
 * the end. If `size` is greater than 0, the function will copy characters from
 * `src` to `dst` until either the end of `src` is reached or `size - 1`
 * characters have been copied. 
 * The function then returns the total length of the string in `src`
 * (not including the null terminator), regardless of whether the 
 * full string was copied or not.
 * 
 * @param dst The destination buffer where the string `src` will be copied.
 * @param src The source string to be copied.
 * @param size The maximum number of characters to be copied to `dst`.
 * @return The length of the string `src` (excluding the null terminator).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Computes the length of a string.
 * 
 * This function calculates the length of the string `s` by counting the number
 * of characters until the null terminator (`'\0'`) is encountered.
 * It does not include the null terminator in the count. The function returns the
 * number of characters in the string `s`.
 * 
 * @param s The string whose length is to be computed.
 * @return The length of the string `s`, excluding the null terminator.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Applies a function to each character of a string and
 * returns a new string.
 * 
 * This function creates a new string by applying the function `f` to each
 * character of the string `s`. The function `f` is passed the index of the
 * character and the character itself, and it returns a new character which is
 * then placed in the resulting string.
 * The new string is dynamically allocated, and it is null-terminated.
 * If memory allocation fails, the function returns NULL.
 * 
 * @param s The string to be modified.
 * @param f The function to apply to each character of the string. It takes the
 * index of the character and the character itself as arguments.
 * @return A new string with each character transformed by the function `f`,
 * 			or NULL if memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Compares the first n characters of two strings.
 * 
 * This function compares the first `n` characters of the strings `s1` and `s2`.
 * The comparison is done lexicographically, meaning it compares the strings
 * character by character. If a mismatch is found before reaching the `n`th
 * character, the function returns the difference between the first unmatched
 * characters. If no difference is found within the first `n` characters,
 * the function returns 0, indicating that the strings are equal up to that
 * point. If either string is shorter than `n`, the comparison stops at the null
 * terminator of the shorter string.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The number of characters to compare.
 * @return An integer less than, equal to, or greater than zero, depending on
 * whether the first `n` characters of `s1` are lexicographically less 
 *         than, equal to, or greater than the first `n` characters of `s2`.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Locates the first occurrence of a substring in a string, within
 * a specified length.
 * 
 * This function locates the first occurrence of the substring `little` within
 * the string `big`, searching up to a maximum of `len` characters. 
 * The search is performed lexicographically, and the function stops if a
 * mismatch is found or the length limit (`len`) is reached.
 * If `little` is an empty string, the function returns the entire string `big`
 * as the match is trivially found at the beginning.
 * The function returns a pointer to the first character of the first
 * occurrence of `little` in `big`. If no match is found within the first `len`
 * characters, the function returns `NULL`.
 * 
 * @param big The string to search within.
 * @param little The substring to search for.
 * @param len The maximum number of characters to search within `big`.
 * @return A pointer to the first occurrence of `little` in `big`, or NULL if no
 * match is found within the first `len` characters.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * This function searches for the last occurrence of the character `c` in the
 * string `s`. The search starts from the end of the string and moves backwards
 * towards the beginning. If the character `c` is found, the function returns a
 * pointer to the position of the character in the string. 
 * If the character is not found, the function returns `NULL`.
 * 
 * @param s The string to search within.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character `c` in the string
 * 			`s`, or `NULL` if the character is not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Frees an array of strings and the array itself.
 * 
 * This function iterates through an array of strings (`strs`), freeing each
 * string individually, and then frees the array itself. 
 * It ensures that all dynamically allocated memory for the array and its
 * strings is properly released.
 * 
 * @param strs A pointer to an array of strings to be freed.
 */
void	ft_strsclear(char **strs);

/**
 * @brief Concatenates an array of strings into a single string.
 * 
 * This function concatenates an array of strings (`strs`) into one single
 * string. It first calculates the total length needed for the resulting
 * string, allocates memory for it, and then copies each string in the array
 * into the resulting string. The memory for the resulting string is 
 * dynamically allocated, and it is null-terminated. If memory allocation fails,
 * the function returns `NULL`.
 * 
 * @param strs An array of strings to concatenate.
 * @return A new string containing all the strings from the array `strs`
 * concatenated, or `NULL` if memory allocation fails.
 */
char	*ft_strsjoin(const char **strs);

/**
 * @brief Computes the length of an array of strings.
 * 
 * This function calculates the number of strings in an array of strings
 * (`strs`). It iterates through the array until it encounters a `NULL` pointer,
 * which marks the end of the array, and returns the number
 * of strings in the array.
 * 
 * @param strs The array of strings to count.
 * @return The number of strings in the array.
 */
int		ft_strslen(char **strs);

/**
 * @brief Trims characters from both ends of a string based on
 * a set of characters.
 * 
 * This function removes characters from the beginning and the end of the string
 * `s1` that are contained in the set of characters `set`.
 * The function returns a new string with the trimmed content. If `s1` or `set`
 * is `NULL`, the function returns `NULL`. If the entire string
 * consists of characters from the set, an empty string is returned.
 * 
 * @param s1 The string to be trimmed.
 * @param set The set of characters to remove from both ends of `s1`.
 * @return A new string with the characters from `s1` trimmed from both ends, or
 * 			`NULL` if either `s1` or `set` is `NULL`.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Extracts a substring from a given string.
 * 
 * This function extracts a substring from the string `s`, starting from
 * the index `start` and continuing for `len` characters. 
 * If `start` is beyond the end of the string, an empty string is returned.
 * If `len` exceeds the remaining length from `start`, the function adjusts
 * `len` to capture all available characters from the `start` position.
 * The resulting substring is dynamically allocated and null-terminated.
 * If memory allocation fails, the function returns `NULL`.
 * 
 * @param s The string from which to extract the substring.
 * @param start The starting index from which the substring begins.
 * @param len The number of characters to include in the substring.
 * @return A new string containing the extracted substring, or `NULL` if memory
 * 			allocation fails or `s` is `NULL`.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif