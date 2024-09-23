/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:31:47 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/23 07:57:23 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* #include <stdio.h>
int	main(void)
{
	printf("index = 5: %d\n", ft_fibonacci(5));
	printf("index = -1: %d\n", ft_fibonacci(-1));
	printf("index = 0: %d\n", ft_fibonacci(0));
	return (42);
} */
