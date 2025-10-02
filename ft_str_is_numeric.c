/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:18:14 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/23 10:06:19 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "123";
	char	c[] = "";

	printf ("%d", ft_str_is_numeric(a));
	printf ("%d", ft_str_is_numeric(b));
	printf ("%d", ft_str_is_numeric(c));
}*/
