/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:20:56 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/12 16:36:35 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int		get_next_line(int fd,char **line)
{
	char	*str;
	char	*final;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	str = ft_strnew(1);
	final = ft_strnew(1);
	if (fd == -1 || line == NULL)
		return (-1);
	while (i <= BUFF_SIZE)
	{
		ret = read(fd, str, 1);
		if (ret == -1)
			return(-1);
		if (str[0] == '\n' || ret == 0)
		{	
			if (ret == 0)
				return (0);
			return (1);
		}
		final = ft_strjoin(final, str);
		i++;
		*line = final;
	}
	return (1);
}
