/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:33:17 by dbourdon          #+#    #+#             */
/*   Updated: 2016/04/10 15:12:35 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		re_lecture(const int fd, char **line, char **str, int ret);
int		re_lecture2(char *buff, char **line, char **str);
int		lecture(char **str, char **line);
int		get_next_line(const int fd, char **line);
char	*ft_strjoinfree(char *s1, char *s2, int	mode);

# define BUFF_SIZE 200

#endif
