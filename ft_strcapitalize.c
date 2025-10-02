/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:26:55 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/24 14:34:05 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
			return (0);
		}
		if (i == 0 || !(((str[i - 1]) >= 48 && (str[i - 1]) <= 65)
				|| ((str[i - 1]) >= 61 && (str[i - 1]) <= 122)))
		{
			while ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	a[] = "OLA, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("Antes:%s\n", a);
	printf("Depois:%s\n", ft_strcapitalize(a));
	return (0);
}
