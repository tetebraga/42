/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:35:02 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/18 09:36:06 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*int     main(void)
{
    int	div; 
    int mod;
    int a = 10;
    int	b = 3;
    
	ft_div_mod(a, b, &div, &mod);
	printf("%d ", div);
	printf("%d", mod);
      return (0);
}*/
