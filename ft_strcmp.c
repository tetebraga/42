/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:07:39 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/24 18:31:06 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char	a[] = "hello";
	char	b[] = "hez";

	printf("sting 1: %s\n", a);
	printf("string 2: %s\n", b);
	printf(" diferenca: %d\n", ft_strcmp(a, b));
	return (0);
}*/
