/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:55:42 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/12 10:56:10 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a = 2;
	int	b = 4;

	printf("(before) a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("(after) a = %d, b = %d\n", a, b);
	return (1);
}
*/