/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:04:31 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 14:38:56 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Convert a char to uppercase.
*
*	1. Check if the char is a letter and lowercase.
*	2. Convert it to uppercase by substracting 32.
*
*	[PARAMETERS]
*
*	int c	: The char.
*
*	[RETURN VALUE]
*
*	Returns the char in uppercase.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
