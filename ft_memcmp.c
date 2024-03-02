/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:54 by hentz             #+#    #+#             */
/*   Updated: 2021/06/15 13:56:42 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Compares the first n bytes (each interpreted as unsigned char) of the
*	memory areas p1 and p2.
*
*	1. Declaring the const unsigned char pointers s1 and s2.
*	2. Return 0 in case of n equal 0.
*	3. Cast and assign void pointers to const unsigned char pointers.
*	4. Checks if s1 is greater or less than s2 while n is not equal 0
*	   and return 1 or -1 in that case. Set pointers to the next byte.
*	5. Return 0 if s1 and s2 are equal.
*
*	[PARAMETERS]
*
*	const void *p1	: Pointer to the first memory area.
*	const void *p2	: Pointer to the second memory area.
*	size_t n		: Number of bytes to compare.
*
*	[RETURN VALUE]
*
*	Returns an integer less than, equal to, or greater than zero if the first
*	n bytes of p1 is found, respectively, to be less than, to match,
*	or be greater than the first n bytes of p2.
*
*	For a nonzero return value, the sign is determined by the sign of the
*	difference between the first pair of bytes (interpreted as unsigned char)
*	that differ in p1 and p2.
*
*	If n is zero, the return value is zero.
*/

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	if (n == 0)
	{
		return (0);
	}
	s1 = p1;
	s2 = p2;
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
