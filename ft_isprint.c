/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:45 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 15:39:13 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Checks for any printable character including space.
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

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}
