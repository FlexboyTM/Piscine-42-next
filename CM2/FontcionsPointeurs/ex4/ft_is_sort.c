/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:45:34 by ropham            #+#    #+#             */
/*   Updated: 2026/02/08 00:22:59 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	decroissant;
	int	croissant;

	decroissant = 1;
	croissant = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decroissant = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			croissant = 0;
		i++;
	}
	return (decroissant || croissant);
}

/*
int	ft_comp(int a, int b)
{
	return (a - b);
}


int main(void)
{
	int tab1[] = {2, 1, 0};
	printf("%d\n", ft_is_sort(tab1, 3, &ft_comp));
}
*/
