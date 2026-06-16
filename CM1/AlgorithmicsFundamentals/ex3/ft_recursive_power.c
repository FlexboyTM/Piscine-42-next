/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:55:53 by ropham            #+#    #+#             */
/*   Updated: 2026/02/02 23:14:45 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return ((nb) = nb * ft_recursive_power(nb, power - 1));
}

/*
int	main(int argc, char **argv)
{
	int	nb;
	int	power;

	if (argc == 3)
	{
		nb = atoi(argv[1]);
		power = atoi(argv[2]);
	}
	printf("%d\n", ft_recursive_power(nb, power));
}
*/
