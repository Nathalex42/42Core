/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:15:39 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/25 12:15:54 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	t;
	int	t2;

	if (argc == 4)
	{
		t = atoi(argv[1]);
		t2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%d", t + t2);
		else if (argv[2][0] == '-')
			printf("%d", t - t2);
		else if (argv[2][0] == '*')
			printf("%d", t * t2);
		else if (argv[2][0] == '/')
			printf("%d", t / t2);
		else if (argv[2][0] == '%')
			printf("%d", t % t2);
	}
	printf("\n");
	return (0);
}
