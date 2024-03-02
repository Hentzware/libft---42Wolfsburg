/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:03:00 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:20:47 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Adds the element ’new’ at the beginning of the list.
*
*	1. Assigning the previous list to the next field of the neew list.
*	2. Replacing the old list with the neew one.
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

void	ft_lstadd_front(t_list **lst, t_list *neew)
{
	neew->next = *lst;
	*lst = neew;
}
