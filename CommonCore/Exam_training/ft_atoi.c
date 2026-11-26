/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:25:12 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/25 12:25:23 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	d;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	n = atoi(argv[1]);
	if (n == 1)
		printf("1");
	d = 2;
	while (n > 1)
	{
		if (n % d == 0)
		{
			printf("%d", d);
			n = n / d;
			if (n > 1)
				printf("*");
		}
		else
			d++;
	}
	printf("\n");
	return (0);
}
