/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:26:14 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/18 10:00:51 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
		;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_nb_by_unit(int nb, char *base, int base_len)
{
	char	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
		print_nb_by_unit(nb / base_len, base, base_len);
	n = base[nb % base_len];
	write(1, &n, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!is_valid_base(base))
		return ;
	base_len = -1;
	while (base[++base_len])
		;
	print_nb_by_unit(nbr, base, base_len);
}
/* int	main(void)
{
	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(42, "");
	return (42);
} */
