/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:20:56 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/09 14:15:04 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, **line)
{
	char	*str;
	int		i;

	i = 0;
	while (i <= BUFF_SIZE)
	{
		ft_strnew(str, 1);
		if (read(fd, str, 1) == -1)
			return(-1);
		if (str[i] == '\n' || str[i] == EOF)
		{
			if (str[i] == EOF)
				return (0);
			else
				return (1);
		}
		strnew(final, str)

	}

}
