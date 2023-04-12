/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:01:26 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/07 14:07:37 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	insert(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			insert(v[i++]);
		return ;
	}
	while (i < size)
		insert (v[i++]);
	write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int		base;
	int		flag;

	flag = 0;
	while (flag < n)
	{	
		v[flag] = flag + 48;
		v_max[flag] = (10 - n) + flag + 48;
		flag++;
	}
	flag = 0;
	print_array(v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		flag = n - 1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);
		while (flag < n)
			v[++flag] = ++base;
		print_array(v, n, v_max[0]);
	}
}
/*int	main()
{
	ft_print_combn(4);
}*/
