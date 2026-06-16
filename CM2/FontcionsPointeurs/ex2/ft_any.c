/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:18:07 by ropham            #+#    #+#             */
/*   Updated: 2026/02/08 00:21:45 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
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

int main(void)
{
	char *tab[] = {"hello", "worlzd", "chat", NULL};
	printf("%d\n", ft_any(tab, &ft_z));
}
*/
