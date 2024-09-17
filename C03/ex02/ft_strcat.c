/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:29:30 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/17 08:03:47 by cade-oli         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = -1;
	while (src[++i] != '\0')
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char	dest1[100];
	char	dest2[100] = "Hello, ";

	printf("%s\n", ft_strcat(dest1, "Hello, World!"));
	printf("%s", ft_strcat(dest2, "World!"));
	return (0);
} */
