/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:25:53 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/12 11:26:08 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_tmp;

	a_tmp = *a;
	*a = a_tmp / *b;
	*b = a_tmp % *b;
}

/* int	main(void)
{
	int	a, b;

	a = 4;
	b = 2;
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a(div) = %d, b(mod) = %d\n", a, b);
	return (42);
} */
