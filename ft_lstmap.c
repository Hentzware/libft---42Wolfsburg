/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:54:08 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:45:30 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	[DESCRIPTION]
*
*	Iterates the list ’lst’ and applies the function ’f’ to the content of
*	each element. Creates a new list resulting of the successive applications
*	of the function ’f’. The ’del’ function is used to delete the content of
*	an element if needed.
*
*	1. Declare a pointer for a new list and a temp list.
*	2. Check if any of the parameters is NULL and return NULL if true.
*	3. Assign the new list by calling ft_lstnew with a call of the function
*	   pointer for creating the content.
*	4. Assign the new list to the temp list.
*	5. While the next element of *lst is not NULL, set lst to the next element.
*	6. Create the next element by using tmp->next with the function pointer.
*	7. Check if something went wrong and call the delete function and return
*	   NULL in that case.
*	8. If a was ok, assign tmp->next to temp until the last element is reached.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
	{
		return (NULL);
	}
	new = ft_lstnew((*f)(lst->content));
	tmp = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		tmp->next = ft_lstnew((*f)(lst->content));
		if (tmp->next == NULL)
		{
			ft_lstdelone(tmp->next, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new);
}
