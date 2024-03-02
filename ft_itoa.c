/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 22:25:54 by hentz             #+#    #+#             */
/*   Updated: 2021/05/24 00:13:33 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Calculates the size of an integer without '\0'.
*
*	1. Declare and initialize the iterator i.
*	2. If n is 0, we need only 1 byte.
*	   If n is negative, we need 1 byte for the sign.
*	3. Count the number of digits by diving n through 10 until it's 0.
*	4. Return the size.
*
*	[PARAMETERS]
*
*	int n	: The integer for the size calculation.
*
*	[RETURN VALUE]
*	Returns the size of the integer as string without '\0'.
*/

static int	get_size(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/*
*	[DESCRIPTION]
*
*	Takes a char * and put the digits in it.
*
*	1. Declare and initialize the iterator i.
*	2. Put the NULL terminator at the end.
*	3. If n is 0, put the '0' at the first position.
*	4. Else if n is greater or less than 0, calculate the chars
*/
static void	create_string(char *s, int n, int size)
{
	int	i;

	i = 0;
	s[size - 1] = '\0';
	if (n == 0)
		s[0] = '0';
	else if (n > 0)
	{
		while (n != 0)
		{
			s[size - i - 2] = '0' + (n % 10);
			n = n / 10;
			i++;
		}
	}
	else
	{
		while (n != 0)
		{
			s[size - i - 2] = '0' - (n % 10);
			n = n / 10;
			i++;
		}
		s[0] = '-';
	}
}

/*
*	[DESCRIPTION]
*
*	Allocates (with malloc(3)) and returns a string representing the integer
*	received as an argument. Negative numbers must be handled.
*
*	1. Declare the string and the size.
*	2. Assign the size with get_size() + 1 for the '\0'.
*	3. Allocate the memory with the size we calculated before.
*	4. Check if the allocation failed and return NULL in that case.
*	5. Convert the int to a string.
*	6. Return the string.
*
*	[PARAMETERS]
*
*	int n	: The integer to convert to a string.
*
*	[RETURN VALUE]
*
*	Returns the string with the converted int.
*/

char	*ft_itoa(int n)
{
	char	*s;
	int		size;

	size = get_size(n) + 1;
	s = malloc(size);
	if (s == NULL)
	{
		return (NULL);
	}
	create_string(s, n, size);
	return (s);
}
