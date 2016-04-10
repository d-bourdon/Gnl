/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:33:17 by dbourdon          #+#    #+#             */
/*   Updated: 2016/03/27 11:37:06 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h> //WARNING
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

# define BUFF_SIZE 20

#endif
