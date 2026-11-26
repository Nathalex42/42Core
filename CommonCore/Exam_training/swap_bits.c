/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:17:37 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:17:41 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	gauche;
	unsigned char	droite;

	gauche = octet / 16;
	droite = octet % 16;
	return (droite * 16 + gauche);
}
