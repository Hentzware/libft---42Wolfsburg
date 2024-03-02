/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:43 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 22:46:52 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Checks for a digit (0 through 9).
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

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
