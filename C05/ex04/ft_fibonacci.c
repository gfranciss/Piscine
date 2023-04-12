/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:05:47 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/15 13:26:35 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>

int ft_fibonacci(int index);

int main()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = ft_fibonacci(n);

    if (resultado == -1)
        printf("Índice inválido!\n");
    else
        printf("O %d-ésimo número na sequência 
	de Fibonacci é %d.\n", n, resultado);

    return 0;
}*/
