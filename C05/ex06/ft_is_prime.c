/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:01:15 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/23 08:23:48 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int	main(void)
{
	printf("1: %d\n", ft_is_prime(1));
	printf("2: %d\n", ft_is_prime(2));
	printf("7: %d\n", ft_is_prime(7));
	printf("10: %d\n", ft_is_prime(10));
	return (42);
} */
