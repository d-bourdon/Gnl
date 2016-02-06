/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 14:40:09 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/06 15:03:32 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		i;
	int		j;


	j = 0;
	i = open("test.txt", O_RDONLY, S_IREAD);
	while (j < 2)
	{
		printf("Hello: %s\n", get_next_line(i, ))
	}
}
