/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 00:26:11 by hentz             #+#    #+#             */
/*   Updated: 2021/06/10 13:50:50 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Applies the function ’f’ to each character of the string ’s’ to create a
*	new string (with malloc(3)) resulting from successive applications of ’f’.
*
*	1. Declare and initialize the iterator and a char pointer for ft_strdup().
*	2. If the allocation fails return NULL.
*	3. While the current char is not '\0' call the function with the char.
*	4. Return the new string pointer.
*
*	[PARAMETERS]
*
*	char const *s					: The string on which to iterate.
*	char (*f)(unsigned int, char)	: The function to apply to each character.
*
*	[RETURN VALUE]
*
*	The string created from the successive applications of ’f’.
*	Returns NULL if the allocation fails.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
