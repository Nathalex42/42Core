/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:15:03 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:15:29 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			c = argv[j][i];
			if (c >= 'A' && c <= 'Z')
				c = c + 32;
			if (c >= 'a' && c <= 'z' && (argv[j][i + 1] == ' '
					|| argv[j][i + 1] == '\t' || argv[j][i + 1] == '\0'))
				c = c - 32;
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
