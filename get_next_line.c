/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:20:56 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/11 15:53:52 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd,char **line)
{
	char	*str;
	char	*final;
	int		i;

	i = 0;
	str = ft_strnew(1);
	final = ft_strnew(1);
	while (i <= BUFF_SIZE)
	{
		if (read(fd, str, 1) == -1)
			return(-1);
		if (str[0] == '\n' || str[0] == EOF)
		{	
			if (str[i] == EOF)
				return (0);
			return (1);
		}
		final = ft_strjoin(final, str);
		i++;
		*line = final;
	}
	return (1);
}
