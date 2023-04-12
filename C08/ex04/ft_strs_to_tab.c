/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:14:32 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/23 19:54:26 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_lenght(src) * sizeof(char) + 1);
	if (!dest)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*array;
	int					index;

	array = malloc((argc + 1) * sizeof(struct s_stock_str));
	index = 0;
	while (index < argc)
	{
		array[index].size = ft_lenght(argv[index]);
		array[index].str = argv[index];
		array[index].copy = ft_strdup(argv[index]);
		index++;
	}
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}

/*int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}*/
