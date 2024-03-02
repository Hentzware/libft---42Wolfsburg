/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:40 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 15:38:37 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Checks whether c is a 7-bit unsigned char value that fits into the ASCII
*	character set.
*
*	[PARAMETERS]
*
*	int c	: The char as int to check.
*
*	[RETURN VALUE]
*
*	The values returned are 1 if the character c falls into the tested
*	class, and 0 if not.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
