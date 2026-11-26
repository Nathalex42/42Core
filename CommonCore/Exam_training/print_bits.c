/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:10:38 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:10:42 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		div;
	char	c;

	div = 128;
	while (div > 0)
	{
		c = octet / div % 2 + '0';
		write(1, &c, 1);
		div = div / 2;
	}
}
