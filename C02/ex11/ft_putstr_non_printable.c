/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:24:15 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/15 12:24:28 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex_buffer[4];

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			hex_buffer[0] = '\\';
			hex_buffer[1] = "0123456789abcdef"[*str / 16];
			hex_buffer[2] = "0123456789abcdef"[*str % 16];
			hex_buffer[3] = '\0';
			write(1, hex_buffer, 3);
		}
		str++;
	}
}
/* int	main(void)
{
	char	example[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(example);
	return (42);
} */