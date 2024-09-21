/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:27:59 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/21 17:44:28 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/* #include <stdio.h>
int	main(void)
{
	printf("5!: %d\n", ft_iterative_factorial(5));
	printf("0!: %d\n", ft_iterative_factorial(0));
	printf("-5!: %d\n", ft_iterative_factorial(-5));
	return (42);
} */
