/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:05:16 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/12 20:05:32 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	char	dest[6] = "Hello";
	char	dest2[6] = "Hello";
	char	src[8] = "World42";

	printf("5: %s\n", ft_strncpy(dest, src, 5));
	printf("3: %s\n", ft_strncpy(dest2, src, 8));
	return (42);
}
 */