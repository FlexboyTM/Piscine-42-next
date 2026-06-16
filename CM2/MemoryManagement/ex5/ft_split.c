/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:31:04 by ropham            #+#    #+#             */
/*   Updated: 2026/02/14 23:13:51 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_check_sep(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_check_sep(sep, str[i]))
			i++;
		else
		{
			while (str[i] != '\0' && !ft_check_sep(sep, str[i]))
				i++;
			count++;
		}
	}
	return (count);
}

int	ft_len_word(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_check_sep(sep, str[i]))
		i++;
	return (i);
}

char	*ft_new_chaine(char *str, int len)
{
	int		i;
	char	*newtab;

	i = 0;
	newtab = malloc(sizeof(char) * (len + 1));
	if (!newtab)
		return (0);
	while (i < len)
	{
		newtab[i] = str[i];
		i++;
	}
	newtab[i] = '\0';
	return (newtab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	char	**tab;

	if (!str)
		return (0);
	tab = malloc(sizeof(char *) * (ft_count_word(str, charset) + 1));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_check_sep(charset, str[i]))
			i++;
		else
		{
			len = ft_len_word(str + i, charset);
			tab[j++] = ft_new_chaine(str + i, len);
			i += len;
		}
	}
	tab[j] = 0;
	return (tab);
}

/*
int	main(void)
{
	char *str = "Bonjour-je suis-un test";
	char *sep = " -";
	char **tab;
	int i = 0;
	
	tab = ft_split(str, sep);
	if (!tab)
		return (1);
	
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
