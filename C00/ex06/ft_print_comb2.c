/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:21:50 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/09 10:25:54 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_number(int nb)
{
	char	digits[3];

	digits[0] = '0' + (nb / 10);
	digits[1] = '0' + (nb % 10);
	digits[2] = '\0';
	write(1, digits, 2);
}

void	ft_print_comb2(void)
{
	int	digits1;
	int	digits2;

	digits1 = 0;
	while (digits1 <= 98)
	{
		digits2 = digits1 + 1;
		while (digits2 <= 99)
		{
			print_number(digits1);
			write(1, " ", 1);
			print_number(digits2);
			if (!(digits1 == 98 && digits2 == 99))
				write(1, ", ", 2);
			digits2++;
		}
		digits1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
