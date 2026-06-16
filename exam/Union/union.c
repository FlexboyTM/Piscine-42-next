/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:43:08 by ropham            #+#    #+#             */
/*   Updated: 2026/02/19 18:50:06 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    main(int argc, char **argv)
{
	int    i;
	int    j;
	
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (j < i && argv[1][j] != argv[1][i])
				j++;
			if (j == i)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			j = 0;
			while (j < i && argv[2][j] != argv[2][i])
				j++;
			if (j == i)
			{
				j = 0;
				while (argv[1][j] && argv[1][j] != argv[2][i])
					j++;
				if (!argv[1][j])
					write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
