/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:15 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/13 13:40:28 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int main(void)
{
	printf("carol: %d\n", ft_str_is_uppercase("carol"));
	printf("CAROL: %d\n", ft_str_is_uppercase("CAROL"));
	printf("cArOl: %d\n", ft_str_is_uppercase("cArOl"));
	printf("5: %d\n", ft_str_is_uppercase("5"));
	printf("<vazio>: %d\n", ft_str_is_uppercase(""));
	return (42);
} */
