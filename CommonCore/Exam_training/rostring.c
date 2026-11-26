/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:13:58 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:14:01 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	first;

	if (argc >= 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		end = i;
		first = 1;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			if (argv[1][i])
			{
				if (!first)
					write(1, " ", 1);
				while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				first = 0;
			}
		}
		if (end > start)
		{
			if (!first)
				write(1, " ", 1);
			write(1, &argv[1][start], end - start);
		}
	}
	write(1, "\n", 1);
	return (0);
}
