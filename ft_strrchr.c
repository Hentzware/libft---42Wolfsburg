/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:47:51 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:35:57 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_strrchr() function returns a pointer to the last occurrence of the
*	character c in the string s.
*
*	1. Declare and initialize the iterator and the length.
*	2. Iterate through the string and check every byte for the char.
*	3. If the char is found assign it to result.
*	4. If the last byte is the char we are searching for assign it to result.
*	5. Return the result.
*
*	[PARAMETERS]
*
*	const char *s	: Pointer to the string.
*	int c			: Char to search.
*
*	[RETURN VALUE]
*
*	ft_strrchr() returns a pointer to the matched character or NULL if the
*	character is not found. The terminating null byte is considered part of the
*	string, so that if c is specified as '\0', these functions return a pointer
*	to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			result = (char *) s + i;
		}
		i++;
	}
	if (s[i] == c)
	{
		result = (char *) s + i;
	}
	return ((char *) result);
}
