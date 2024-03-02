/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:32:26 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:00:44 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Counts the number of elements in a list.
*
*	1. Declare the size and a temp list.
*	2. If the list is NULL return 0.
*	3. Initialize the size and the temp list.
*	4. Iterate through the list until next is NULL and count up the size.
*	5. Return the size.
*
*	[PARAMETERS]
*
*	t_list *lst	: The source list.
*
*	[RETURN VALUE]
*
*	Returns the number of elements in the list.
*/

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	if (lst == NULL)
	{
		return (0);
	}
	size = 1;
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
