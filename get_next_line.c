/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 14:06:31 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/22 14:08:58 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_read(buff_stock, fd)
{
	int		ret;

	ret = 0;
	buff_stock = strnew(BUFF_SIZE);
	ret = read(fd, buff_stock, BUFF_SIZE);
	return(ret);
}

int		ft_return(int ret, char *out, char **line)
{
	
}

int		get_next_line(int fd, char **line)
{
	static char *buff_stock;
	char		*out;
	int			i;
	int			j;


	i = 0;
	j = 0;
	out = ft_strnew(BUFF_SIZE);
	if (buff_stock == NULL)
		if (ft_read(buff_stock, fd) == -1)
			return(-1);
	while (i < BUFF_SIZE - nb)
	{
		if (buff_stock[i] == '\n')
			return(ft_return(1, out, line));
		else if (buff_stock[i] == '\0')
		{
			free(buff_stock);
			if(ft_read(buff_stock, fd) == -1)
				return(-1);
			nb = i;
			i = 0;
		}
		else if (buff_stock[i] == EOF)
			return(ft_return(0, out, line));
		else
			out[j++] = buff_stock[i];
		i++;
	}
	return(ft_return(1, out, line));
}
