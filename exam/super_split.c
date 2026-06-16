/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:44:16 by ropham            #+#    #+#             */
/*   Updated: 2026/02/19 18:24:18 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **res;

	res = malloc(sizeof(char) * 1000);
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		j = i;
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			i++;
		if (i > j)
		{
			res[k] = malloc(sizeof(char) * (i - j) + 1);
			if (!res[k])
				return(NULL);
			ft_strncpy(res[k], &str[j], i - j);
			k++;
		}
	}
	res[k] = '\0';
	return (res);
}

int	main(void)
{
	int i;
	char *str = "Bonjour Moi\nC'est\t Robin   \n !!";
	char **tab;
	
	tab = ft_split(str);
	i = 0;
	while (tab[i])
	{
		printf("==> %s\n", tab[i]);
		i++;
	}
}
