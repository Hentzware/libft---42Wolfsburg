/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:44:11 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 13:42:32 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_strlcat() function appends the NUL-terminated string src to the
*	end of dst.  It will append at most size - strlen(dst) - 1 bytes,
*	NUL-terminating the result.
*
*	1. Declare and initialize the char pointers, n and d_length.
*	2. Move pointer to the start position.
*	3. Assign the length for d and calculate n.
*	4. If n is 0, return d_length + the length of s.
*	5. Else fill the remaining space with n chars and '\0' terminate.
*	6. Return d_length + s - src.
*
*	[PARAMETERS]
*
*	char *dest		: Pointer to the destination.
*	const char *src : Pointer to the source.
*	size_t length	: Number of bytes to append.
*
*	[RETURN VALUE]
*
*	Returns the initial length of dst plus the length of src.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		d_length;

	d = dest;
	s = src;
	n = length;
	while (n-- != 0 && *d != '\0')
		d++;
	d_length = d - dest;
	n = length - d_length;
	if (n == 0)
		return (d_length + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (d_length + (s - src));
}
