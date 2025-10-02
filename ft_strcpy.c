/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:42:31 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/18 18:06:15 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *des, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		des[a] = src[a];
		a++;
	}
	des[a] = '\0';
	return (des);
}
/*int	main(void)
{
	char	a[] = "hello";
	char	b[50];
	int	i;

	printf("%s",ft_strcpy(b, a));
	
	return (0);
}*/
