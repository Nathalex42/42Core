/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:25:36 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/25 12:26:10 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	u;

	i = 0;
	sign = 1;
	u = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && get_digit(str[i]) != -1 && get_digit(str[i]) < str_base)
	{
		u = u * str_base + get_digit(str[i]);
		i++;
	}
	return (u * sign);
}
