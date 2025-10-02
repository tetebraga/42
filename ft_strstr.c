/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:26:47 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/25 15:18:22 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	a[] = "hello y dear friend!";
	char	b[] = "friend";

	printf ("String 1: %s\n", a);
	printf ("string 2: %s\n", b);
	printf ("macth : %s", ft_strstr(a, b));
}*/		
