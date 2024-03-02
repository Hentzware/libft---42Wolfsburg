/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:49 by hentz             #+#    #+#             */
/*   Updated: 2021/05/26 22:10:31 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_memccpy() function copies no more than n bytes from memory area src
*	to memory area dest, stopping when the character c is found.
*	If the memory areas overlap, the results are undefined.
*
*	1. Cast the void pointers to char pointers.
*	2. While n is not 0, copy byte by byte until the stopping char is found.
*	3. If the char was found return a void pointer pointing to the next char.
*	4. If the char was not found return NULL.
*
*	[PARAMETERS]
*
*	void *dest	: Destination.
*	void *src	: Source.
*	int c		: Stopping char.
*	size_t n	: Size to copy in bytes.
*
*	[RETURN VALUE]
*
*	The ft_memccpy() function returns a pointer to the next character in dest
*	after c, or NULL if c was not found in the first n characters of src.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d = *s;
		if (*s == (unsigned char) c)
		{
			return (((void *) d + 1));
		}
		d++;
		s++;
	}
	return (NULL);
}
