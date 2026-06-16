/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:53:17 by ropham            #+#    #+#             */
/*   Updated: 2026/02/07 20:40:33 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alnum(char c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'));
}

int	is_printable(char c)
{
	return (32 <= c && c <= 126);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (i == 0 || !is_alnum(str[i - 1])
				|| !is_printable(str[i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}


int	main(void)
{
	char str[] = "heLLo. How are\nyou doing?\t42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(str));
}

