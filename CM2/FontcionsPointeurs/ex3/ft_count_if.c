/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:56:12 by ropham            #+#    #+#             */
/*   Updated: 2026/02/08 00:21:17 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			c++;
		i++;
	}
	return (c);
}

/*
int	ft_z(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			return (1);
		i++;
	}
	return (0);
}


int	main(void)
{
	char *tab[] = {"hello", "worlzd", "zrobin"};
	printf("%d\n", ft_count_if(tab, 3, &ft_z));
}
*/
