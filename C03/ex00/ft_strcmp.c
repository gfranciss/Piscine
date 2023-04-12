/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:45:04 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/13 10:06:10 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main() {
    char str1[] = "Teste";
    char str2[] = "Testa";
    int cmp = ft_strcmp(str1, str2);

    if (cmp == 0) {
        printf("As strings são iguais.\n");
    } else if (cmp < 0) {
        printf("str1 é menor que str2.\n");
    } else {
        printf("str1 é maior que str2.\n");
    }

    return 0;
}*/
