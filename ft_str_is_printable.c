/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:38:10 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/24 10:57:19 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	 main(void)
{
	char	a[] = "~hello";//1
	char	b[] = "\n";//0
	char	c[] = "";//1

	printf("%d", ft_str_is_printable(a));
	printf("%d", ft_str_is_printable(b));
	printf("%d", ft_str_is_printable(c));
	return(0);
}*/
