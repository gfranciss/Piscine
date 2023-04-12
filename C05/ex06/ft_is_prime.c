/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:04:44 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/16 11:06:14 by gfrancis         ###   ########.fr       */
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
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (ft_mod(nb, i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int numero;
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);

	int resultado = ft_is_prime(numero);

	printf("%d %d", resultado, numero);
}*/
