/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 01:17:41 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:19:16 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Adds the element ’new’ at the beginning of the list.
*
*	[PARAMETERS]
*
*	void *content	: Pointer to the content.
*
*	[RETURN VALUE]
*
*	Returns the pointer to the new list.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (head == NULL)
	{
		return (NULL);
	}
	head->content = content;
	head->next = NULL;
	return (head);
}
