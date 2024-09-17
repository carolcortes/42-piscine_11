/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:21:31 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/17 07:28:37 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while ((s1[++i] != '\0' || s2[i] != '\0') && i < n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("carol", "carol", 5));
	printf("%d\n", ft_strncmp("carol", "caroll", 6));
	printf("%d\n", ft_strncmp("xcarol", "carol", 1));
	return (0);
} */
