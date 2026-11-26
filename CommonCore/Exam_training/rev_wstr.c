/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:12:53 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:12:56 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;
	int	first;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		first = 1;
		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i--;
			end = i;
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			if (end > i)
			{
				if (!first)
					write(1, " ", 1);
				write(1, &argv[1][i + 1], end - i);
				first = 0;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
