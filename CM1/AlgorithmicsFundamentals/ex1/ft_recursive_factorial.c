/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 00:28:36 by ropham            #+#    #+#             */
/*   Updated: 2026/01/31 21:46:52 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return ((nb) = nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(void)
{
	int	r = 6;
	printf("%d\n", ft_recursive_factorial(r));
	return (0);
}
*/
