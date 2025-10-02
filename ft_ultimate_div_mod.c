/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:38:10 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/23 09:58:04 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (b != 0)
	{
		x = *a / *b;
		y = *a % *b;
	}
	*a = x;
	*b = y;
}
/*int	main(void)
{
	int	a = 10;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d ", a);
       printf("%d", b);
return(0);
}*/
