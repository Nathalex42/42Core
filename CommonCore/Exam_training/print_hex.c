/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:11:06 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/26 01:11:11 by nathalex         ###   ########.fr       */
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

void	put_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		put_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		put_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
