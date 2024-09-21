/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:24:33 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/21 15:42:00 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/* #include <stdio.h>
int	main(void)
{
	printf("5!: %d\n", ft_recursive_factorial(5));
	printf("0!: %d\n", ft_recursive_factorial(0));
	printf("-5!: %d\n", ft_recursive_factorial(-5));
	return (42);
} */
