/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:24:41 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/23 08:37:50 by cade-oli         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	result;

	result = nb + 1;
	while (!ft_is_prime(result))
		result++;
	return (result);
}
/* #include <stdio.h>
int	main(void)
{
	printf("3: %d\n", ft_find_next_prime(3));
	printf("2: %d\n", ft_find_next_prime(2));
	printf("15: %d\n", ft_find_next_prime(15));
	return (42);
} */
