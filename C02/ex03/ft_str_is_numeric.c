/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:05:42 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/13 12:06:35 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int main(void)
{
	printf("carol: %d\n", ft_str_is_numeric("carol"));
	printf("5: %d\n", ft_str_is_numeric("5"));
	printf("<vazio>: %d\n", ft_str_is_numeric(""));
	return (42);
} */