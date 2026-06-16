/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:36:12 by ropham            #+#    #+#             */
/*   Updated: 2026/02/14 16:16:41 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_total(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strs[i])
		i++;
	while (sep[j])
	{
		strs[i] = sep[j];
		i++;
		j++;
	}
	strs[i] = '\0';
	return (strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstrs;
	int		i;

	if (size == 0)
	{
		newstrs = malloc(1);
		if (!newstrs)
			return (NULL);
		newstrs[0] = '\0';
		return (newstrs);
	}
	newstrs = malloc(sizeof(char) * ft_strlen_total(size, strs, sep) + 1);
	if (!newstrs)
		return (NULL);
	i = 0;
	newstrs[i] = '\0';
	while (i < size - 1)
	{
		ft_strcat(newstrs, strs[i]);
		ft_strcat(newstrs, sep);
		i++;
	}
	ft_strcat(newstrs, strs[i]);
	return (newstrs);
}

/*
int	main(void)
{
	char *strs[] = {"Bonjour", "Monde"};
	char *sep = "Le";
	int size = 2;
	printf("%s\n", ft_strjoin(size, strs, sep));
}
*/
