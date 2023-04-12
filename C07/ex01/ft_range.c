/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:16:21 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/21 10:40:02 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (0);
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
