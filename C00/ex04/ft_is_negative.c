/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:07:26 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/05 16:18:26 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n < 0)
		c = 'N';
	write(1, &c, 1);
}
/*
int	main(void)
{
	write(1, "1: ", 3);
	ft_is_negative(1);
	write(1, "\n0: ", 4);
	ft_is_negative(0);
	write(1, "\n-1: ", 5);
	ft_is_negative(-1);
	return (0);
}
*/
