/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <tebraga-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:35:50 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/22 15:12:56 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_putn(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putn(a);
			ft_putchar(' ');
			ft_putn(b);
			ft_putchar(',');
		}
		if ( a == 98 && b == 99)
		{
			ft_putchar(' ');	
		}
		b++;
		a++;
	}
}


int	main(void)
{
	ft_print_comb2();
	return (0);
}
