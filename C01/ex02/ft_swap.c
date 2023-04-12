/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:13:28 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/08 10:08:26 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int main()
{
	int n, n1;

	n = 1213;
	n1 = 34134;

	printf("Antes: %d %d\n", n, n1);
	ft_swap(&n ,&n1);
	printf("Depois: %d %d\n", n, n1);
}*/
