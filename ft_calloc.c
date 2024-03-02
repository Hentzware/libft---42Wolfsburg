/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:31 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 00:15:05 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Allocates memory for an array of nmemb elements of size bytes and
*	returns a pointer to the allocated memory. The memory is set to zero.
*	If nmemb or size is 0, then ft_calloc() returns NULL.
*
*	1. Declare pointer and allocate memory of size nmemb * size.
*	2. If the allocation fails, return the NULL pointer.
*	3. Set the memory to zero.
*	4. Return the pointer.
*
*	[PARAMETERS]
*
*	size_t nmemb	: Number of elements.
*	size_t size		: Size in bytes of one element.
*
*	[RETURN VALUE]
*
*	Return a pointer to the allocated memory or NULL on error.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
