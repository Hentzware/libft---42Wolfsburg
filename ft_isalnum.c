/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:34 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 15:38:09 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Checks for an alphanumeric character.
*	it is equivalent to (ft_isalpha(c) || ft_isdigit(c)).
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

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
