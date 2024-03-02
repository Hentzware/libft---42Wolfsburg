/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 00:04:03 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:16:36 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_memset() function fills the first n bytes of the memory area pointed
*	to by s with the constant byte c.
*
*	[PARAMETERS]
*
*	void *s		: Pointer to source.
*	int c		: Byte to set.
*	size_t n	: Number of bytes to set.
*
*	[RETURN VALUE]
*
*	None.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n-- > 0)
	{
		*tmp++ = c;
	}
	return (s);
}
