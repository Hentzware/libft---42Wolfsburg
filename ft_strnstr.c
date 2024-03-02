/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 00:21:37 by hentz             #+#    #+#             */
/*   Updated: 2021/06/15 14:04:00 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	ft_strnstr() locates the first occurrence of the null-terminated
*	string s2 in the string s1, where not more than len characters are
*	searched. Characters that appear after a ‘\0’ character are not searched.
*
*	1. Declare and initialize the length of the sub-string.
*	2. If the sub-string is NULL return s1.
*	3. While the number of bytes to search is greater or equal the length of
*	   s2, check if the remaining part is equal to the substring.
*	4. Return the pointer to the first occurence if the sub-string was found,
*	   else return NULL.
*
*	[PARAMETERS]
*
*	const char *s1	: Pointer to the string.
*	const char *s2	: Pointer to the sub-string.
*	size_t n		: Number of bytes to search.
*
*	[RETURN VALUE]
*
*	If s2 is an empty string, s1 is returned.
*	If s2 occurs nowhere in s1, NULL is returned.
*	Otherwise a pointer to the first character of the first occurrence of
*	s2 is returned.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_length;

	s2_length = ft_strlen(s2);
	if (s2 == NULL)
	{
		return ((char *) s1);
	}
	while (n >= s2_length)
	{
		n--;
		if (ft_memcmp(s1, s2, s2_length) == 0)
		{
			return ((char *) s1);
		}
		s1++;
	}
	return (NULL);
}
