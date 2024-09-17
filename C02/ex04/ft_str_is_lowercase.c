/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:11:22 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/13 12:11:36 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int main(void)
{
	printf("carol: %d\n", ft_str_is_lowercase("carol"));
	printf("CAROL: %d\n", ft_str_is_lowercase("CAROL"));
	printf("cArOl: %d\n", ft_str_is_lowercase("cArOl"));
	printf("5: %d\n", ft_str_is_lowercase("5"));
	printf("<vazio>: %d\n", ft_str_is_lowercase(""));
	return (42);
} */