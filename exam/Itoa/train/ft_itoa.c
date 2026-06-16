/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:35:17 by ropham            #+#    #+#             */
/*   Updated: 2026/02/19 18:42:27 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(long n)
{
	int	i;
	i = (n <= 0);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long n;
	int len;
	char *str;

	n = nbr;
	len = ft_len(n);

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	str[len] = '\0';

	if (n < 0)
		n = -n;
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(-42));
}
