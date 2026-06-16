/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 20:39:10 by ropham            #+#    #+#             */
/*   Updated: 2026/02/08 00:22:36 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!f)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
}

int	main(void)
{
	int tab[5] = {6, 7, 6, 7, -4};

	ft_foreach(tab, 5, &ft_putnbr);
}
*/
