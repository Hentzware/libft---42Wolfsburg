/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:31:03 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 13:58:19 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	ft_strncmp() compares the first n bytes of the two strings s1 and s2.
*
*	1. Declare two chars and initialize them with '\0'.
*	2. While the number of bytes to compare is greater than 0, assign the
*	   current char of both pointers to c1 and c2 and check if c1 is '\0'
*	   or c1 is not equal c2. If it is not equal return the substraction
*	   c1 - c2.
*	3. Return the substraction of c1 - c2.
*
*	[PARAMETERS]
*
*	const char *s1	: Pointer to the first string.
*	const char *s2	: Pointer to the second string.
*	size_t n		: Number of bytes to compare.
*
*	[RETURN VALUE]
*
*	Returns an integer less than, equal to, or greater than zero.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = '\0';
	c2 = '\0';
	while (n > 0)
	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0' || c1 != c2)
		{
			return (c1 - c2);
		}
		n--;
	}
	return (c1 - c2);
}
