/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:19:42 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/09 13:24:06 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main ()
{
	char src[20] = "C teste";
	char dest[20];
	int i;

	i = 0;
	ft_strcpy(dest, src);
	while(dest[i] != '\0')
	{
		write (1, &dest[i], 1);
		i++;
	}	
}*/
