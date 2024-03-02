/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:03:28 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 13:21:45 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Erases the data in the n bytes of the memory starting at the location
*	pointed to by p, by writing zeros (bytes containing '\0') to that area.
*
*	1. Declare char pointer s and assign p to s.
*	2. While the number of bytes to overwrite is greater than 0, write '\0'
*	   to the current address and set the address to the next byte.
*
*	[PARAMETERS]
*
*	void *p		: Pointer to the memory address.
*	size_t n	: Number of bytes to overwrite.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_bzero(void *p, size_t n)
{
	char	*s;

	s = p;
	while (n-- > 0)
	{
		*s++ = '\0';
	}
}
