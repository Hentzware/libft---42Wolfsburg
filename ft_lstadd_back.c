/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 01:53:29 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:21:09 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Adds the element ’new’ at the end of the list.
*
*	1. Declare the temporary list *tmp.
*	2. If there is no list at the beginning,
*	   add the neew list at the first position.
*	3. If there is a list, assign the first pointer to the temporary list and
*	   assign temp->next to temp until temp->next is NULL.
*	4. Assign the neew list to temp->next.
*
*	[PARAMETERS]
*
*	t_list **lst	: Array of list pointers.
*	t_list *neew		: The list element to add.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_lstadd_back(t_list **lst, t_list *neew)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = neew;
	}
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = neew;
	}
}
