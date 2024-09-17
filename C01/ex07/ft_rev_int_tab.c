/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:16:28 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/12 12:16:47 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/* int	main(void)
{
	int	rev[5] = {0, 1, 2, 3, 4};
	int	i = 0;

	while (i < 5)
		printf("%d", rev[i++]);
	printf("\n");
	i = 0;
	ft_rev_int_tab(rev, 5);
	while (i < 5)
		printf("%d", rev[i++]);
	printf("\n");
	return (42);
} */
