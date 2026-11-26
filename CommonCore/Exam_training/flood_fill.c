/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:18:48 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/25 12:22:43 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	c;
	int		x;
	int		y;
	int		new_zone;

	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	new_zone = 1;
	while (new_zone)
	{
		new_zone = 0;
		y = 0;
		while (y < size.y)
		{
			x = 0;
			while (x < size.x)
			{
				if (tab[y][x] == c && ((x > 0 && tab[y][x - 1] == 'F')
						|| (x < size.x - 1 && tab[y][x + 1] == 'F')
						|| (y > 0 && tab[y - 1][x] == 'F')
						|| (y < size.y - 1 && tab[y + 1][x] == 'F')))
				{
					tab[y][x] = 'F';
					new_zone = 1;
				}
				x++;
			}
			y++;
		}
	}
}
