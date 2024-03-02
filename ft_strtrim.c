/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 00:26:36 by hentz             #+#    #+#             */
/*   Updated: 2021/05/27 15:31:48 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set_char(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

/*
*	[DESCRIPTION]
*
*	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
*	specified in ’set’ removed from the beginning and the end of the string.
*
*	1. Declare start and stop to determine the area to copy and str as target.
*	2. Check if one of the parameters is NULL and return NULL in that case.
*	3. Initialize the start position and iterate through s1 until no set char
*	   is found or the string end is reached.
*	4. Initialize the stop position by calling ft_strlen and substract 1.
*	5. Iterate through s1 beginning from the end until no set char is found
*	   or the start position is reached.
*	6. Allocate memory for the destination, calculating the size with start
*	   and stop.
*	7. If the allocation failed, return NULL.
*	8. Copy the trimmed part with the gathered information of the position.
*	9. '\0' terminate the trimmed string.
*	10. Return the trimmed string.
*
*	[PARAMETERS]
*
*	char const *s1	: Pointer to the source string.
*	char const *set	: Pointer to the set chars.
*
*	[RETURN VALUE]
*
*	Returns a pointer to the trimmed string or NULL in case of fail.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		stop;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (is_set_char(s1[start], set) && *s1 != '\0')
	{
		start++;
	}
	stop = ft_strlen(s1) - 1;
	while (is_set_char(s1[stop], set) && stop > start)
	{
		stop--;
	}
	str = malloc(stop - start + 2);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str, s1 + start, stop - start + 2);
	str[stop - start + 1] = '\0';
	return (str);
}
