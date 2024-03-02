/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:04:01 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:13:53 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_memmove() function copies n bytes from memory area src to memory
*	area dest. The memory areas may overlap: copying takes place as though the
*	bytes in src are first copied into a temporary array that does not overlap
*	src or dest, and the bytes are then copied from the temporary array
*	to dest.
*
*	1. Declare 2 pointers for the src and dest.
*	2. If the destination is greater than the src add n to both and start
*	   copying from the end, if not do the normal copy.
*
*	[PARAMETERS]
*
*	void *dest		: The destination pointer.
*	const void *src	: The source pointer.
*	size_t n		: Number of bytes to move.
*
*	[RETURN VALUE]
*
*	Returns a pointer to the destination.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest <= src)
	{
		d = dest;
		s = src;
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d = dest;
		d += n;
		s = src;
		s += n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}
