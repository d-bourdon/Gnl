/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 14:06:31 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/21 14:55:33 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		buff_stock_void (char *buff_stock, char *out, int limit)
{
	int		i;

	i = 0;
	while (i < limit)
	{
		if (buff_stock[i] == '\0')
		{
			if (i == 0);
				return(0);
			return(i);
		}
		else if (buff_stock[i] == '\n')
			ft_return(1);
		else
			out[i] == buff_stock[i];
		i++;
	}
}

int		ft_return(int val)
{
	ghdjsad                 
}

int		get_next_line(int fd, char **line)
{
	static char	buff_stock;
	int			nb;
	char		out;
	if (buff_stock == NULL)
		buff_stock = ft_strnew(BUFF_SIZE);
	nb = buff_stock_void(buff_stock, out, BUFF_SIZE);
	if (nb != -1)
	{
		read(fd, buff_stock, BUFF_SIZE);
		buff_stock_void(buff_stock, out, BUFF_SIZE - nb);
	}
}
