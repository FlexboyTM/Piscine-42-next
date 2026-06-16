/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:43:57 by ropham            #+#    #+#             */
/*   Updated: 2026/02/02 23:04:29 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int		i;
	char	t[9];

	if (n < 1 || 9 < n)
		return ;
	i = -1;
	while (i++ < n - 1)
		t[i] = i + '0';
	while (t[0] <= '9' - n + 1)
	{
		write(1, t, n);
		if (t[0] != '9' - n + 1)
			write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && t[i] == '9' - (n - 1 - i))
			i--;
		if (i < 0)
			return ;
		t[i]++;
		while (i < n - 1)
		{
			t[i + 1] = t[i] + 1;
			i++;
		}
	}
}


void	main(void)
{
	int n;
	n = 10;
	ft_print_combn(n);
}

