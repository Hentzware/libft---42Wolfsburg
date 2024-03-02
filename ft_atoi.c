/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:36:34 by hentz             #+#    #+#             */
/*   Updated: 2021/05/21 22:44:45 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Checks the char for spacing.
*
*	[PARAMETERS]
*
*	char c	: The char to check.
*
*	[RETURN VALUE]
*
*	Returns 1 if char is spacing, 0 if not.
*/

static int	is_space(char c)
{
	if (c == '\f' || c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

/*
*	[DESCRIPTION]
*
*	Converts the initial portion of the string pointed to by s to int.
*	The behavior is the same as strtol(nptr, NULL, 10) except that ft_atoi()
*	does not detect errors.
*
*	1. Declare and initialize result and is_negative.
*	2. Set the pointer position to the first char that is no space.
*	3. If the char is '-' set is_negative to true and set position to the next
*	   byte, if the char is '+' only set the position to the next byte.
*	4. While the char is not '\0' and a digit, multiply the result by 10 and
*	   convert and add the char as digit. Then move to the next byte.
*	5. If the result is negative multiply it with -1.
*
*	Ex: "123"
*	0  =  0 * 10 + (49 - 48) | 1
*	1  =  1 * 10 + (50 - 48) | 12
*	12 = 12 * 10 + (51 - 48) | 123
*
*	[PARAMETERS]
*
*	const char *s	: The pointer to the string to convert into an int.
*
*	[RETURN VALUE]
*
*	The converted value.
*/

int	ft_atoi(const char *s)
{
	int	result;
	int	is_negative;

	result = 0;
	is_negative = 0;
	while (is_space(*s))
		s++;
	if (*s == '-')
	{
		is_negative = 1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s != '\0' && ft_isdigit(*s))
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	if (is_negative)
		result = -1 * result;
	return (result);
}
