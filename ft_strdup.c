/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:22:27 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 10:44:22 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	The ft_strdup() function returns a pointer to a new string which is a
*	duplicate of the string s. Memory for the new string is obtained with
*	malloc(3), and can be freed with free(3).
*
*	1. Declare a void pointer and length for use in ft_memcpy().
*	2. Initialize the pointer and the length.
*	3. Return NULL if the allocation fails.
*	4. Return the pointer to the duplicate by using ft_memcpy().
*
*	[PARAMETERS]
*
*	const char *str	: Pointer to the string.
*
*	[RETURN VALUE]
*
*	On success, the ft_strdup() function returns a pointer to the duplicated
*	string. It returns NULL if insufficient memory was available.
*/

char	*ft_strdup(const char *str)
{
	void	*new;
	size_t	length;

	length = ft_strlen(str) + 1;
	new = malloc(length);
	if (new == NULL)
	{
		return (NULL);
	}
	return ((char *) ft_memcpy(new, str, length));
}
