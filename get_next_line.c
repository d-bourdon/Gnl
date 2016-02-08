/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:20:56 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/08 16:06:23 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*readnext(int fd)
{
	char	*str;
	str = (char*)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (read(fd, str, BUFF_SIZE))
		return (str);
	return(0);
}

int		get_next_line(int fd, **line)
{
	int			i;
	static char	**tmp;

	i = 0;
	while (*tmp[i] != '\n' && *tmp[i] != '\0')
		i++;
	if (i == 0)
}
