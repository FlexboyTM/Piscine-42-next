/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:14:32 by ropham            #+#    #+#             */
/*   Updated: 2026/02/01 19:26:14 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	int	lignes;
	int	colonnes;

	if (argc == 3)
	{
		colonnes = ft_atoi(argv[1]);
		lignes = ft_atoi(argv[2]);
	}
	rush(colonnes, lignes);
}
