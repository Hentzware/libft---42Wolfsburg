/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 01:44:38 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:28:03 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Returns the last element of the list.
*
*	1. Declare and assign a temp list.
*	2. Check if the list is NULL and return NULL in that case.
*	3. While the next element of the current list is not NULL,
*	   assign it to tmp.
*	4. Return the last element.
*
*	[PARAMETERS]
*
*	t_list *lst	: Pointer to the list.
*
*	[RETURN VALUE]
*
*	Return the pointer to the last element in the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
	{
		return (NULL);
	}
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
