/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:27:37 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/25 12:28:51 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(long nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*str;
	int		j;

	j = 0;
	i = 1000000000;
	nb = n;
	str = malloc(sizeof(char) * (ft_len(nb) + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[j++] = '-';
		nb = -nb;
	}
	while (i > 1 && nb / i == 0)
		i = i / 10;
	while (i > 0)
	{
		str[j++] = nb / i % 10 + '0';
		i = i / 10;
	}
	str[j] = '\0';
	return (str);
}
