/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 14:40:09 by dbourdon          #+#    #+#             */
/*   Updated: 2016/02/08 12:16:51 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		i;
	int		j;
	char	**myreturn;

	myreturn = (char**)malloc(sizeof(char*)*1);
	j = 0;
	i = open("test.txt", O_RDONLY, S_IREAD);
	while (j < 2)
	{
		get_next_line(i, myreturn);
		printf("Hello: %s\n", myreturn);
	}
	close(i);
}
