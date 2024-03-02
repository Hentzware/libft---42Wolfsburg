/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hentz <hentz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 00:24:56 by hentz             #+#    #+#             */
/*   Updated: 2021/06/15 15:00:26 by hentz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.
*/

static char	*get_null_terminated_copy(char const *s, char c, int *l, int *p)
{
	int		i;
	int		skip;
	char	*tmp;

	i = 0;
	skip = 0;
	tmp = ft_strdup(s);
	*l = ft_strlen(tmp);
	*p = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == c)
		{
			tmp[i] = '\0';
			if (skip == 1)
				skip = 0;
		}
		else if (skip == 0)
		{
			*p = *p + 1;
			skip = 1;
		}
		i++;
	}
	return (tmp);
}

static char	*get_piece(char *s, int length, int piece)
{
	int	piece_nr;
	int	current_pos;

	piece_nr = 0;
	current_pos = 0;
	while (current_pos < length)
	{
		while (s[current_pos] == '\0')
			current_pos++;
		if (piece_nr == piece)
			return (ft_strdup(s + current_pos));
		else
		{
			piece_nr++;
			while (s[current_pos] != '\0')
				current_pos++;
		}
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*s_copy;
	char	**s_arr;
	int		length;
	int		pieces;
	int		piece;

	if (s == NULL)
		return (NULL);
	length = 0;
	pieces = 0;
	piece = 0;
	s_copy = get_null_terminated_copy(s, c, &length, &pieces);
	s_arr = malloc((pieces + 1) * sizeof(char *));
	while (piece < pieces)
	{
		s_arr[piece] = get_piece(s_copy, length, piece);
		piece++;
	}
	s_arr[piece] = NULL;
	return (s_arr);
}
