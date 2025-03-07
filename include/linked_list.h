/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:01:10 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/07 18:38:34 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

/**
 * @brief Structure representing an element of a linked list.
 *
 * Each element in the list contains a pointer to the element's content
 * and a pointer to the next element in the list.
 */
typedef struct s_list
{
	void			*content;	/**< Content of the element */
	struct s_list	*next;		/**< Pointer to the next element in the list */
}					t_list;

/**
 * @brief Creates a new list element.
 *
 * This function allocates memory for a new list element, initializes
 * its content with the passed parameter, and sets the `next` pointer to `NULL`.
 *
 * @param content The content to store in the new element.
 * @return A pointer to the newly created list element.
 * @note The function returns `NULL` if memory allocation fails.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds an element to the front of the list.
 *
 * This function adds a new element to the front of the list. The `lst`
 * pointer is updated to point to this new element.
 *
 * @param lst A pointer to a pointer to the head of the list.
 * @param node The element to add to the front of the list.
 * @note The function does not check if `node` is `NULL`.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Calculates the size of the list.
 *
 * This function traverses the list and counts the number
 * of elements it contains.
 *
 * @param lst A pointer to the head of the list.
 * @return The size of the list (the number of elements).
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Retrieves the last element of the list.
 *
 * This function traverses the list until it finds the element
 * whose `next` pointer is `NULL`, and returns it.
 *
 * @param lst A pointer to the head of the list.
 * @return The last element of the list. If the list is empty, returns `NULL`.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Adds an element to the end of the list.
 *
 * This function adds an element to the end of the list by updating
 * the `next` pointer of the last element in the list to point to
 * the new element.
 *
 * @param lst A pointer to a pointer to the head of the list.
 * @param node The element to add to the end of the list.
 * @note The function does not check if `node` is `NULL`.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Deletes an element from the list.
 *
 * This function deletes an element from the list by freeing the memory
 * associated with its content using the `del` function. The next element
 * in the list takes the place of the deleted element.
 *
 * @param lst The element of the list to delete.
 * @param del The deletion function for the element's content.
 * @note If `lst` is `NULL`, the function does nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes all elements of the list.
 *
 * This function traverses the list and deletes each element using
 * the `del` function to free the memory associated with each content.
 * The pointer to the head of the list is set to `NULL`.
 *
 * @param lst A pointer to a pointer to the head of the list.
 * @param del The deletion function for the content of the list elements.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Applies a function to each element of the list.
 *
 * This function traverses the list and applies the `f` function to each
 * element of the list.
 *
 * @param lst A pointer to the head of the list.
 * @param f The function to apply to each element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Creates a new list by applying a function to each element.
 *
 * This function traverses the original list and applies the `f` function
 * to each element. A new element is created for each result returned
 * by the `f` function. If `f` returns `NULL`, the corresponding element
 * is deleted using the `del` function.
 *
 * @param lst The original list.
 * @param f The function to apply to each element to generate the new content.
 * @param del The deletion function for the content of the elements.
 * @return The newly created list. If an error occurs, returns `NULL`.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif /* LINKED_LIST_H */