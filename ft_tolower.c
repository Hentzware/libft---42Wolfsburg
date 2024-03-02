/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:04:28 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 14:37:53 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Convert a char to lowercase.
*
*	1. Check if the char is a letter and uppercase.
*	2. Convert it to lowercase by adding 32 to the char.
*
*	[PARAMETERS]
*
*	int c	: The char.
*
*	[RETURN VALUE]
*
*	Returns the char in lowercase.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
