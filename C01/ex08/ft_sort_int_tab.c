/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:59:12 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/12 12:59:30 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
		size--;
	}
}

/* int	main(void)
{
	int	arr[6] = {8, 42, 4, 15, 16, 23};
	int	i = 0;

	printf("before: ");
	while (i < 6)
	{
		printf("%d", arr[i++]);
		if (i != 6)
			printf(", ");
	}
	ft_sort_int_tab(arr, 6);
	printf("\nafter: ");
	i = 0;
	while (i < 6)
	{
		printf("%d", arr[i++]);
		if (i != 6)
			printf(", ");
	}
	return (42);
} */
