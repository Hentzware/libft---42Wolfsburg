/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 00:25:46 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:49:03 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Allocates (with malloc(3)) and returns a new string, which is the result of
*	the concatenation of ’s1’ and ’s2’.
*
*	1. Declare the length of s1 and s2 and a pointer for the new string.
*	2. Initialize the length and use them to allocate memory for str.
*	3. If the allocation fails, return NULL.
*	4. Copy the first string to the new string.
*	5. Copy the second string to the new string.
*	6. NULL terminate the new string.
*	7. Return the new string.
*
*	[PARAMETERS]
*
*	char const *s1	: Pointer to string 1.
*	char const *s2	: Pointer to string 2.
*
*	[RETURN VALUE]
*
*	Returns the pointer to the new string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	char	*str;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	str = malloc(s1_length + s2_length + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_memcpy(str, s1, s1_length);
	ft_memcpy(str + s1_length, s2, s2_length);
	str[s1_length + s2_length] = '\0';
	return (str);
}
