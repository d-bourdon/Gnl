/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 14:40:09 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/12 16:45:02 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		i;
	int		j;
	int		k;
	char	**myreturn;

	myreturn = (char**)malloc(sizeof(char*)*1);
	j = 0;
	k = 0;
	i = open("test.txt", O_RDONLY, S_IREAD);
	while (j < 3)
	{
		k = get_next_line(i, myreturn);
		printf("%s retun (%d)", myreturn[0], k);
		j++;
	}
	close(i);
}
