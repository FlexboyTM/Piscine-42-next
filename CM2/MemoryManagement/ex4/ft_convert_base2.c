/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 21:33:02 by ropham            #+#    #+#             */
/*   Updated: 2026/02/14 20:07:40 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	nbr_len(long nbr, int base_len)
{
	int		len;
	long	n;

	len = 0;
	n = nbr;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n != 0)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	char	*result;
	long	n;

	base_len = ft_strlen(base);
	len = nbr_len(nbr, base_len);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	n = nbr;
	result[len--] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	if (n == 0)
		result[0] = base[0];
	while (n > 0)
	{
		result[len--] = base[n % base_len];
		n /= base_len;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	result;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	result = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(result, base_to));
}

/*
int	main(int argc, char **argv)
{
	(void)argc;
	char	*res;
	res = ft_convert_base(argv[1], argv[2], argv[3]);
	if (!res)
		return (1);
	printf("%s\n", res);
	free(res);
}
*/
