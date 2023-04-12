/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:44:50 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/03 10:02:21 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

void	insert(char i)
{
	write(1, &i, 1);
}

void	resultado(char x, char y, char z)
{	
	bool	m;

	insert(x);
	insert(y);
	insert(z);
	m = ! (x == '7' && y == '8' && z == '9');
	if (m)
	{
		insert(',');
		insert(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				resultado(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
