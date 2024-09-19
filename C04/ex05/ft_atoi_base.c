/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:40:37 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/19 09:03:16 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char s)
{
	if (s == ' ' || s == '\t' || s == '\n'
		|| s == '\v' || s == '\f' || s == '\r')
		return (1);
	return (0);
}

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
		if (base[i] == '-' || base[i] == '+' || ft_isspace(base[i]))
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

int	char_to_value(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	char_value;
	int	base_len;
	int	result;
	int	sign;
	int	i;

	if (!is_valid_base(base))
		return (0);
	base_len = -1;
	while (base[++base_len])
		;
	sign = 1;
	i = -1;
	while (str[++i] == '-' || str[i] == '+' || ft_isspace(str[i]))
		if (str[i] == '-')
			sign = -sign;
	result = 0;
	while (str[i])
	{
		char_value = char_to_value(str[i++], base);
		if (char_value == -1)
			return (0);
		result = (result * base_len) + char_value;
	}
	return (result * sign);
}

/* #include <stdio.h>
int	main(void)
{
	// printf()
	printf("%d\n", ft_atoi_base("-101010", "01")); // -42
	printf("%d\n", ft_atoi_base("-42", "0123456789")); // -42
	printf("%d", ft_atoi_base("2A", "0123456789ABCDEF")); // 42
	return (42);
} */
