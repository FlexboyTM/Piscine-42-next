/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:04:34 by ropham            #+#    #+#             */
/*   Updated: 2026/02/01 19:19:23 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static void	ligne_haut(int largeur)
{
	int	colonne;

	colonne = 1;
	while (colonne <= largeur)
	{
		if (colonne == 1)
			ft_putchar('A');
		else if (colonne == largeur)
			ft_putchar('C');
		else
			ft_putchar('B');
		colonne++;
	}
	ft_putchar('\n');
}

static void	ligne_bas(int largeur)
{
	int	colonne;

	colonne = 1;
	while (colonne <= largeur)
	{
		if (colonne == 1)
			ft_putchar('C');
		else if (colonne == largeur)
			ft_putchar('A');
		else
			ft_putchar('B');
		colonne++;
	}
	ft_putchar('\n');
}

static void	ligne_milieu(int largeur)
{
	int	colonne;

	colonne = 1;
	while (colonne <= largeur)
	{
		if (colonne == 1 || colonne == largeur)
			ft_putchar('B');
		else
			ft_putchar(' ');
		colonne++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	ligne;

	if (x <= 0 || y <= 0)
		return ;
	ligne = 1;
	while (ligne <= y)
	{
		if (ligne == 1)
			ligne_haut(x);
		else if (ligne == y)
			ligne_bas(x);
		else
			ligne_milieu(x);
		ligne++;
	}
}
