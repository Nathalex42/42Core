/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:11:43 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/25 12:12:47 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		u = u * 10 + (str[i] - '0');
		i++;
	}
	return (u);
}

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr(int n)
{
	char	c;

	if (n > 9)
		putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (n > 0)
		{
			if (is_prime(n))
				sum = sum + n;
			n--;
		}
	}
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
