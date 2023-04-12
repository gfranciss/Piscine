/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:57:56 by gfrancis          #+#    #+#             */
/*   Updated: 2023/03/14 11:04:43 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (int)str[i] - '0';
		++i;
	}
	return (result * sign);
}
/*int main()
{
    char str1[] = "1234";
    char str2[] = "--567";
    char str3[] = "  +8";
    char str4[] = "0";
    char str5[] = "     -12";
    char str6[] = "123a45";

    printf("str1 = %d\n", ft_atoi(str1));
    printf("str2 = %d\n", ft_atoi(str2));
    printf("str3 = %d\n", ft_atoi(str3));
    printf("str4 = %d\n", ft_atoi(str4));
    printf("str5 = %d\n", ft_atoi(str5));
    printf("str6 = %d\n", ft_atoi(str6));

    return 0;
}*/
