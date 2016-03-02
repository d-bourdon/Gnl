/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:33:17 by dbourdon          #+#    #+#             */
/*   Updated: 2016/03/02 13:47:23 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoinfree(char *s1, char *s2, int mode)
{
	char *tmp;

	tmp = ft_strjoin(s1, s2);
	if (mode == 1)
		free(s1);
	else if (mode == 2)
		free(s2);
	else
	{
		free(s1);
		free(s2);
	}
	return(tmp);

}

int		lecture(char **str, char **line)
{
	char	*tmp;
	char	*tmp2;

	tmp = ft_strchr(*str, '\n');
	free(*line);
	*line = ft_strsub(*str, 0, tmp - *str);
	tmp2 = ft_strdup(tmp + 1);
	free(*str);
	*str = tmp2;
	return (1);
}

int		re_lecture2(char **stock, char *buff, char **line, char **str)
{
	char	*tmp;

	tmp = ft_strchr(buff, '\n');
	*stock = ft_strsub(buff, 0, tmp - buff);
	*line = ft_strjoinfree(*line, *stock, 0);
	*str = ft_strdup(tmp + 1);
	free(buff);
	return (1);
}

int		re_lecture(const int fd, char **line, char **str, int ret)
{
	char	*stock;
	char	*tmp2;
	char	*buff;
	int		count;

	count = 0;
	if (*str != '\0')
		*line = ft_strjoinfree(*str, *line, 2);
	buff = ft_memalloc(BUFF_SIZE + 1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		count = 1;
		buff[ret] = '\0';
		if ((tmp2 = ft_strchr(buff, '\n')) == NULL)
			*line = ft_strjoinfree(*line, buff, 1);
		else
			return (re_lecture2(&stock, buff, line, str));
	}
	free(buff);
	if (ret == -1)
		return (-1);
	if (count == 0)
		return (0);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str[256];
	int			ret;

	ret = 0;
	if (fd < 0 || fd > 255 || !line)
		return (-1);
	*line = ft_memalloc(1);
	if (str[fd] == NULL)
		str[fd] = ft_memalloc(1);
	if ((ft_strchr(str[fd], '\n')) != NULL)
		return (lecture(&(str[fd]), line));
	return (re_lecture(fd, line, &(str[fd]), ret));
}
