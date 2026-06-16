/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:36:45 by ropham            #+#    #+#             */
/*   Updated: 2026/02/16 22:02:14 by ropham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

/*
MAIN TEST (FAIRE UN NOUVEAU FICHIER POUR CORRECTION)

#include "ft_point.h"
#include <stdio.h>

void    set_point(t_point *point)
{
        point->x = 42;
        point->y = 21;
}

int     main(void)
{
        t_point point;
        set_point(&point);
        printf("%d\n%d", point.x, point.y);
        return (0);
}
*/
