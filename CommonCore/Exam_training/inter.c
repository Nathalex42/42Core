/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:07:08 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:07:13 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	tab[256] = {0};
	int	i;
	int	c;

	if (argc == 3)
	{
		i = 0;
		while (argv[2][i])
		{
			c = argv[2][i];
			tab[c] = 1;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (tab[c] == 1)
			{
				write(1, &argv[1][i], 1);
				tab[c] = 2;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
