/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:43:31 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/07 13:56:39 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

void	insert(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= INT_MAX && nb >= INT_MIN)
	{
		if (nb < 0)
		{
			insert('-');
			nb *= -1;
		}
		if (nb > 9)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
		else
		{
			insert (nb + '0');
		}
	}		
}
