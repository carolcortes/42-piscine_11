/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:22:43 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/14 18:23:04 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/* #include <stdio.h>
int	main(void)
{
	char dest[3];
	unsigned int ft_return;

	ft_return = ft_strlcpy(dest, "Hello World", 3);
	printf("dest[3], \"Hello World\", 3: %s", dest);
	printf("\nreturn: %d", ft_return);
	return (42);
} */