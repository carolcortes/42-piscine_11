/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:59:14 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/13 11:10:12 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int	main(void)
{
	printf("carol: %d\n", ft_str_is_alpha("carol"));
	printf("5: %d\n", ft_str_is_alpha("5"));
	printf("<vazio>: %d\n", ft_str_is_alpha(""));
	return (42);
}
 */