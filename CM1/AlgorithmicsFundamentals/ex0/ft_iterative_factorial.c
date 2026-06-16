/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:34:00 by ropham            #+#    #+#             */
/*   Updated: 2026/02/02 19:45:39 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		r = nb * r;
		nb--;
	}
	return (r);
}

/*
int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 2)
		nb = atoi(argv[1]);
	printf("%d\n", ft_iterative_factorial(nb));
}
*/
