/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:38:39 by hentz             #+#    #+#             */
/*   Updated: 2021/05/22 02:53:56 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Takes as a parameter an element and frees the memory of the element’s
*	content using the function ’del’ given as a parameter and free the element.
*	The memory of ’next’ must not be freed.
*
*	1. Check if none of the pointers is NULL.
*	2. Call the delete function for the content.
*	3. Free the memory.
*
*	[PARAMETERS]
*
*	t_list *lst			: The list element to delete.
*	void (*del)(void *)	: Pointer to the function that is called for deleting.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		(*del)(lst->content);
		free(lst);
	}
}
