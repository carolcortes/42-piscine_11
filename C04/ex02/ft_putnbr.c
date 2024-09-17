/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:47:15 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/17 13:54:17 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb_by_unit(int nb)
{
	char	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		print_nb_by_unit(nb / 10);
		nb = nb % 10;
	}
	n = nb + '0';
	if (nb < 10)
		write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
		print_nb_by_unit(nb);
}

/* int	main(void)
{
	ft_putnbr(-42);
	return (42);
}
 */