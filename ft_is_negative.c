/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebraga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:31:50 by tebraga-          #+#    #+#             */
/*   Updated: 2025/09/12 12:18:37 by tebraga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_caractere(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_caractere('N');
	}
	if (n >= 0)
	{
		ft_caractere('P');
	}
}

/*int	main(void)

{
	ft_is_negative(0);
	return (0);
}*/
