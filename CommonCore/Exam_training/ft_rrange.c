/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 00:51:51 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 00:52:04 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start <= end)
			tab[i] = end - i;
		else
			tab[i] = end + i;
		i++;
	}
	return (tab);
}
