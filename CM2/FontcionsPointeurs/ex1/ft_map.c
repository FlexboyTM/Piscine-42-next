/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:39:29 by ropham            #+#    #+#             */
/*   Updated: 2026/02/08 00:22:15 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab2;
	int	i;

	if (!f)
		return (0);
	tab2 = malloc(sizeof(int) * length);
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}

/*
int	ft_nb(int c)
{
	c += 100;
	return (c);
}

int	main(void)
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int *tab2 = ft_map(tab, 6, &ft_nb);
	int i = 0;
	while (i < 6)
	{
		printf("%d\n", tab2[i]);
		i++;
	}
}
*/
