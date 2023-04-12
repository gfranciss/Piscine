/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:24:30 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/06 11:40:11 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	insert(char value)
{
	write(1, &value, 1);
}

void	convert_intchar(int value)
{
	int	x;
	int	y;

	if (value > 9)
	{
		x = value / 10;
		y = value % 10;
		insert(x + '0');
		insert(y + '0');
	}
	else
	{
		insert('0');
		insert(value + 48);
	}
}

void	result(int x, int y)
{
	convert_intchar(x);
	insert(' ');
	convert_intchar(y);
	if (x < 98 || y < 99)
	{
		insert(',');
		insert(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			result(x, y);
			y++;
		}
		x++;
	}
}
