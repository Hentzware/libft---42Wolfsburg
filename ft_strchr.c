/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:34:33 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:26:45 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_strchr() function returns a pointer to the first occurrence of the
*	character c in the string s.
*
*	1. Declare and initialize the iterator and the length.
*	2. Iterate through the string and check every byte for the char.
*	3. If the char is found return it, else return NULL.
*
*	[PARAMETERS]
*
*	const char *s	: Pointer to the string.
*	int c			: Char to search.
*
*	[RETURN VALUE]
*
*	ft_strchr() returns a pointer to the matched character or NULL if the
*	character is not found. The terminating null byte is considered part of the
*	string, so that if c is specified as '\0', these functions return a pointer
*	to the terminator.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s) + 1;
	while (i < length)
	{
		if (s[i] == c)
		{
			return ((char *) s + i);
		}
		i++;
	}
	return ((char *) NULL);
}
