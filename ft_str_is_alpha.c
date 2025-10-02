/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:39:57 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/23 10:03:52 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int	i;
	char	a[] = "Hello";
	char	b[] = "q%3j9";
	char	e[] = "";
	
printf ("%d", ft_str_is_alpha(a));
printf ("%d", ft_str_is_alpha(b));
printf ("%d", ft_str_is_alpha(e));
}*/
