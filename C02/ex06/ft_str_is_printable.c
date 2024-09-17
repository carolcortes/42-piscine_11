/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:44:25 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/13 13:44:45 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	printf("carol: %d\n", ft_str_is_printable("carol"));
	printf("CAROL: %d\n", ft_str_is_printable("CAROL"));
	printf("cArOl: %d\n", ft_str_is_printable("cArOl"));
	printf("5: %d\n", ft_str_is_printable("5"));
	printf("<vazio>: %d\n", ft_str_is_printable(""));
	return (42);
} */