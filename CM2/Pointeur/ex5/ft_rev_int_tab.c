/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:28:31 by ropham            #+#    #+#             */
/*   Updated: 2026/02/03 15:41:12 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
int	main(void)
{
	int tab[] = {5, 4, 3, 2, 1};
	int size = 5;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
