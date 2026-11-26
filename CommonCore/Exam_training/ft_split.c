/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 00:54:09 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 00:54:20 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**str2;
	int		i;
	int		j;
	int		k;

	j = 0;
	str2 = malloc(sizeof(char *) * 10000);
	i = 0;
	while (str[i])
	{
		if (str[i] > 32)
		{
			str2[j] = malloc(sizeof(char) * 1000);
			k = 0;
			while (str[i] && str[i] > 32)
				str2[j][k++] = str[i++];
			str2[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	str2[j] = 0;
	return (str2);
}
