/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:13:32 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:13:34 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;
	int				i;

	r = 0;
	i = 0;
	while (i < 8)
	{
		r = r * 2 + octet % 2;
		octet = octet / 2;
		i++;
	}
	return (r);
}
