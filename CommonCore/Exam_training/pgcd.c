/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:09:55 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:10:09 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	temp;
	int	temp2;
	int	j;
	int	k;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	temp = atoi(argv[1]);
	temp2 = atoi(argv[2]);
	j = 1;
	k = 1;
	if (temp == temp2)
		j = temp;
	else if (temp > temp2)
	{
		while (k <= temp2)
		{
			if (temp % k == 0 && temp2 % k == 0)
				j = k;
			k++;
		}
	}
	else if (temp2 > temp)
	{
		while (k <= temp)
		{
			if (temp % k == 0 && temp2 % k == 0)
				j = k;
			k++;
		}
	}
	printf("%d\n", j);
	return (0);
}
