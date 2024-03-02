/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 22:22:56 by hentz             #+#    #+#             */
/*   Updated: 2021/06/15 14:43:04 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Allocates (with malloc(3)) and returns a substring from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*
*	1. Declare and initialize i, j, s_len and sub.
*	2. If s is NULL or the allocation fails, return NULL.
*	3. While the string end is not reached and j is less than len,
*	   iterate through s and copy the chars to sub.
*	5. Put a '\0' at the last byte.
*	6. Return the substring.
*
*	[PARAMETERS]
*
*	char const *s		: Pointer to the source string.
*	unsigned int start	: Index start position.
*	size_t len			: Lenght of the substring.
*
*	[RETURN VALUE]
*
*	Returns a '\0' terminated substring or NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*sub;

	i = start;
	j = 0;
	s_len = ft_strlen(s);
	sub = malloc(len + 1);
	if (s == NULL || sub == NULL)
	{
		return (NULL);
	}
	while (i < s_len && j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
