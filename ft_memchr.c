/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:51 by hentz             #+#    #+#             */
/*   Updated: 2021/05/26 22:18:28 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_memchr() function scans the initial n bytes of the memory area
*	pointed to by s for the first instance of c.  Both c and the bytes of the
*	memory area pointed to by s are interpreted as unsigned char.
*
*	1. Cast the void pointer to an unsigned char pointer.
*	2. While the number of bytes to search is not 0, check if the current
*	   byte is c.
*	3. If c is found, return the pointer to c in s.
*	4. If c is not found, return NULL.
*
*	[PARAMETERS]
*
*	const void *s	: Pointer to memory area.
*	int c			: The char to search for.
*	size_t n		: Number of bytes to scan.
*
*	[RETURN VALUE]
*
*	The ft_memchr() functions return a pointer to the matching byte or NULL
*	if the character does not occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--)
	{
		if (*p == (unsigned char) c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
