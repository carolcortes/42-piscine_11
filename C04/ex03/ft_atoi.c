/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 07:33:46 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/19 08:30:37 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char s)
{
	if (s == ' ' || s == '\t' || s == '\n'
		|| s == '\v' || s == '\f' || s == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	sign = 1;
	i = -1;
	while (str[++i] == '-' || str[i] == '+' || ft_isspace(str[i]))
		if (str[i] == '-')
			sign = -sign;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("42"));
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return (42);
}
*/
