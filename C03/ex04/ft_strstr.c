/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:10:05 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/17 09:07:11 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = -1;
	if (*to_find == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0'
			&& str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
	}
	return ('\0');
}

/* #include <stdio.h>
int	main(void)
{
	char	str[] = "I'm not superstitious, but I am a little stitious";

	printf("%s\n", ft_strstr(str, "stitious"));
	printf("%s", ft_strstr(str, "Michael"));
	return (0);
} */
