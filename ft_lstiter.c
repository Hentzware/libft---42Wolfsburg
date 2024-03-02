/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:19:28 by hentz             #+#    #+#             */
/*   Updated: 2021/05/22 03:07:19 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Iterates the list ’lst’ and applies the function ’f’
*	to the content of each element.
*
*	1. Check if none of the parameters is NULL.
*	2. While the list is not NULL, call the function and set the list
*	   to the next list.
*
*	[PARAMETERS]
*
*	t_list *lst			: Pointer to the list.
*	void (*f)(void *)	: Pointer to the function.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
}
