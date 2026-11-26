/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:19:40 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:19:42 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	while (argv[2][j] != '\0')
	{
		if (argv[1][i] == argv[2][j])
		{
			i++;
			if (argv[1][i] == '\0')
				write(1, argv[1], i);
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
