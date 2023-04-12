/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:28:36 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/13 11:53:13 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	b = 0;
	res = 0;
	while (dest[a])
		a++;
	while (src[res])
		res++;
	if (size <= a)
		res += size;
	else
		res += a;
	while (src[b] && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (res);
}
/*#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(void)
{
    char src2[] = "OpenAI";
    char dest2[SIZE] = "Hello, ";
    size_t len2 = ft_strlcat(dest2, src2, SIZE); // usando a função ft_strlcat
    printf("Resultado da ft_strlcat: dest2 = \"%s\", len2 = %zu\n", dest2, len2);

    return 0;
}*/
