/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:42:59 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/19 11:11:22 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_mod(int a, int b)
{
	int	result;

	result = a % b;
	return (result);
}

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (ft_is_prime(nb + i) == 0)
	{
		i++;
	}
	return (nb + i);
}
/*int main()
{
	int numero;

	printf("Escolha um numero:");
	scanf("%d", &numero);

	int resultado = ft_find_next_prime(numero);

	printf("%d %d", numero, resultado);
}*/
