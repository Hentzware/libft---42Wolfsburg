/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:04:17 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 13:45:21 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_strlen() function calculates the length of the string pointed
*	to by s, excluding the terminating null byte ('\0').
*
*	1. Declare and initialize the length.
*	2. While s is not '\0' increment length.
*	3. Return the length.
*
*	[PARAMETERS]
*
*	const char *s	: Pointer to the string.
*
*	[RETURN VALUE]
*
*	Returns the length without '\0'.
*/

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
