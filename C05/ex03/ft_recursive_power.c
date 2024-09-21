/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:58:30 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/21 16:07:15 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/* #include <stdio.h>
int	main(void)
{
	printf("nb = 5, power = 5: %d\n", ft_recursive_power(5, 5));
	printf("nb = 5, power = 0: %d\n", ft_recursive_power(5, 0));
	printf("nb = 5, power = -5: %d\n", ft_recursive_power(5, -5));
	return (42);
} */
