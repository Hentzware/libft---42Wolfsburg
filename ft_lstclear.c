/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:12:22 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:24:11 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Deletes and frees the given element and every successor of that element,
*	using the function ’del’ and free(3).
*	Finally, the pointer to the list must be set to NULL.
*
*	1. Declare two list pointers that are needed for iterating.
*	2. Check if none of the parameters is NULL.
*	3. Assign the first list element as current element.
*	4. While current is not NULL, assign the next element of current
*	   to next, call the delete function and assign next to current.
*	5. Set the pointer to the list to NULL.
*
*	[PARAMETERS]
*
*	t_list **lst		: Array of list pointers.
*	void (*del)(void *)	: The delete function for the content.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			next = current->next;
			ft_lstdelone(current, del);
			current = next;
		}
		if (lst != NULL)
		{
			*lst = NULL;
		}
	}
}
