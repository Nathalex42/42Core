/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:19:20 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:19:22 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	tab[256] = {0};
	int	i;
	int	j;
	int	c;

	if (argc == 3)
	{
		j = 1;
		while (j <= 2)
		{
			i = 0;
			while (argv[j][i])
			{
				c = argv[j][i];
				if (tab[c] == 0)
				{
					tab[c] = 1;
					write(1, &argv[j][i], 1);
				}
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
