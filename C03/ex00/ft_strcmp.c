/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 06:59:46 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/17 07:25:05 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] != '\0' || s2[i] != '\0')
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("carol", "carol"));
	printf("%d\n", ft_strcmp("carol", "caroll"));
	printf("%d\n", ft_strcmp("caroll", "carol"));
	return (0);
}
 */
