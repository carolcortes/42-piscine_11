/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:33:12 by cade-oli          #+#    #+#             */
/*   Updated: 2024/09/14 16:33:15 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	i;

	ft_strlowcase(str);
	first_letter = 1;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			first_letter = 0;
		else if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			first_letter = 1;
		else if ((str[i] >= 'a' && str[i] <= 'z') && first_letter)
		{
			str[i] -= 32;
			first_letter = 0;
		}
	}
	return (str);
}
/* #include <stdio.h>
int	main(void)
{
	char str[] = "sALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("before: %s\n", str);
	ft_strcapitalize(str);
	printf("after: %s", str);
	return (42);
} */