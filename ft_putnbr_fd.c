/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 22:25:18 by hentz             #+#    #+#             */
/*   Updated: 2021/05/24 00:01:19 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Takes an int and write it in the output.
*
*	1. If n is INT_MIN write the sign, the first digit and assign the remaining
*	   digits to n.
*	2. If n is less than zero write the sign and convert n into a positive int.
*	3. If n is greater or equal 10 call the function recursively with the
*	   division and the remainder of n.
*	4. If the last digit is reached write the last char.
*
*	Ex: "123"
*	123 / 10 -> 12 / 10    -> 1          -> 12 % 10      -> 123 % 10   -> ...
*	123 > 10 -> putnbr(12) -> putchar(1) -> putchar(2)   -> putchar(3) -> ...
*
*	[PARAMETERS]
*
*	int n	: The int to write.
*	int fd	: The file descriptor.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
