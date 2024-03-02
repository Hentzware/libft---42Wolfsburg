/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 22:16:19 by hentz             #+#    #+#             */
/*   Updated: 2021/05/23 23:40:11 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	[DESCRIPTION]
*
*	Writes a char in the console.
*
*	[PARAMETERS]
*
*	char c	: The char to write.
*	int fd	: The file descriptor.
*
*	[RETURN VALUE]
*
*	None.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
