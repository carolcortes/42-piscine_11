/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:53:37 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/23 08:00:26 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf("16: %d\n", ft_sqrt(16));
	printf("25: %d\n", ft_sqrt(25));
	printf("0: %d\n", ft_sqrt(0));
	printf("7: %d\n", ft_sqrt(7));
	return (42);
} */
