/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:17:12 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/25 10:51:52 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char	a[] = "cama";
	char	b[] = "cav";

	printf("string 1: %s\n", a);
	printf("string 2: %s\n", b);
	printf("comparacao 1: %d\n", ft_strncmp(a, b, 3));
	printf("comparacao 2: %d\n", ft_strncmp(a, b, 1));
	return (0);
}*/	
