/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:37 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 15:38:01 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Checks for an alphabetic character.
*	It is equivalent to (isupper(c) || islower(c)).
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

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
