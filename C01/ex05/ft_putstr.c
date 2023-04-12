/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:40:33 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/08 10:25:34 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
/*int main()
{
	char	*c;

	c = "teste";
	ft_putstr(c);
}*/
