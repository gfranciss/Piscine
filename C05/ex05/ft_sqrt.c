/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:27:50 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/16 10:55:53 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*int main()
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = ft_sqrt(numero);

    if (resultado == 0)
        printf("%d não tem raiz quadrada inteira.\n", numero);
    else
        printf("A raiz quadrada de %d é %d.\n", numero, resultado);

    return 0;
}*/
