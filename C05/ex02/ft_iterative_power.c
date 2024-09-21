/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:28:46 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/21 15:57:19 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/* #include <stdio.h>
int	main(void)
{
	printf("nb = 5, power = 5: %d\n", ft_iterative_power(5, 5));
	printf("nb = 5, power = 0: %d\n", ft_iterative_power(5, 0));
	printf("nb = 5, power = -5: %d\n", ft_iterative_power(5, -5));
	return (42);
} */
