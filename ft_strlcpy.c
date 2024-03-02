/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:04:14 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 15:55:06 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*   The ft_strlcpy() function copies up to size - 1 characters from the
*	NUL-terminated string src to dst, NUL-terminating the result.
*
*	1. Declare and initialize the length of the source string.
*	2. If the length of the string is less than the size, copy only
*	   the length of the string. Else copy the whole size.
*	3. Return the length of the source string.
*
*	[PARAMETERS]
*
*	char *dest		: Copy destination
*	const char *src	: Copy source.
*	size_t size		: Size in bytes.
*
*	[RETURN VALUE]
*
*	Returns the length of the source string.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
	{
		ft_memcpy(dest, src, src_len + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (src_len);
}
