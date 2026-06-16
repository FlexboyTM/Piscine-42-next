/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:43:25 by ropham            #+#    #+#             */
/*   Updated: 2026/02/02 19:44:54 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = r * nb;
		power--;
	}
	return (nb);
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
	printf("%d\n", ft_iterative_power(nb, power));

}
*/
