/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:20:43 by ropham            #+#    #+#             */
/*   Updated: 2026/02/09 16:44:10 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*newtab;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	newtab = malloc(sizeof(int) * size);
	if (!newtab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		newtab[i] = min + i;
		i++;
	}
	return (newtab);
}

/*
int	main(void)
{
	int min = 5;
	int max = 10;
	int size = max - min;
	int *a = ft_range(min, max);

	int i = 0;
	while (i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	free(a);

}
*/
