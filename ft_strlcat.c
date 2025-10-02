/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:21:35 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/25 18:58:13 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *c)
{	
	int	sz;

	sz = 0;
	while (c[sz] != '\0')
	{
		sz++;
	}
	return(sz);
	
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest = ft_len(dest);
	unsigned int	src_size;
	unsigned int	len_src = ft_len(src);
	
	if (size == '\0')
		return (0);
	
	src_size = 0;
	while (src[src_size] != '\0' && size > (len_dest + 1))
	{
		dest[len_dest + src_size] = src[src_size];
		if ((len_dest + src_size + 1) == size)
		{
			dest[len_dest + src_size + 1] = '\0';
		}
		src_size++;
	}
	if (size > len_dest)
	{	
		return (src_size + len_src);
	}
	return (len_dest + len_src);
}
/*#include <stdio.h>

int	main(void)
{
	char	a[10] = "hello";
	char	b[] = "my dear friend";
	
	printf("String 1: %s\n", a);
	printf("String 2: %s\n", b);
	printf("combinacao acertiva: %d\n", ft_strlcat( a, b, 2));
}*/
