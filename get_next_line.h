/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:33:17 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/06 14:39:57 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#		 include <stdio.h> ///dsgauidgsauydsa
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		get_next_line(int const fd, char **line);
