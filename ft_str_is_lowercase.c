/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:46:14 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/23 10:08:34 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	a[] = "abc";
	char	b[] = "ABC";
	char	c[] = "";

	printf("%d", ft_str_is_lowercase(a));
	printf("%d", ft_str_is_lowercase(b));
	printf("%d", ft_str_is_lowercase(c));
}*/
