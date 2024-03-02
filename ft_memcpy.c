/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:58 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:05:19 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_memcpy() function copies n bytes from memory area src to memory area
*	dest. The memory areas must not overlap.  Use memmove(3) if the memory
*	areas do overlap.
*
*	1. Declare 2 char pointers for src and dest.
*	2. Initialize the pointers with the src and dest.
*	3. While the number of bytes to copy is not 0, copy the byte and count up.
*
*	[PARAMETERS]
*
*	void *dest		: The destination pointer.
*	const void *src	: The source pointer.
*	size_t n		: Number of bytes to copy.
*
*	[RETURN VALUE]
*
*	Returns the pointer to the destination.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
