/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:32:14 by ropham            #+#    #+#             */
/*   Updated: 2026/02/16 19:34:20 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h" 

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	if (!str)
		return (NULL);
	dup = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/*
int	main(int ac, char **av)
{
	t_stock_str	*tab;
	int	i = 0;
	tab = ft_strs_to_tab(ac - 1, av + 1);
	while (tab[i].str)
	{
		printf("size = %d\nstring = %s\ncopy = %s\n\n", 
		tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
}
*/
/*
STRUCTURE A COPIER COLLER DANS UN AUTRE FICHIER (.h)
typedef struct  s_stock_str
{
        int     size;
        char    *str;
        char    *copy;
}               t_stock_str;
*/
