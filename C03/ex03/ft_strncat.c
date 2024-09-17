/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:52:36 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/17 08:12:25 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	i;

	i = -1;
	dest_len = ft_strlen(dest);
	while (src[++i] != '\0' && i < nb)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char	dest1[100];
	char	dest2[100] = "Hello, ";

	printf("%s\n", ft_strncat(dest1, "Hello, World!", 5));
	printf("%s", ft_strncat(dest2, "World!", 15));
	return (0);
} */
