/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:09:48 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/23 10:26:10 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "HELLO";// 1
	char	b[] = "hello 25";//0
	char	c[] = "";//1

	printf("%d", ft_str_is_uppercase(a));
	printf("%d", ft_str_is_uppercase(b));
	printf("%d", ft_str_is_uppercase(c));
return (0);
}*/
