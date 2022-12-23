/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daddy_cool <daddy_cool@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:00:12 by daddy_cool        #+#    #+#             */
/*   Updated: 2022/12/23 18:47:25 by daddy_cool       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char		buf[12];
	unsigned long long	i;
	const int	neg = n < 0;

	if (neg == 0)
		n = -n;
	i = 12;
	buf[--i] = '\0';
	while (1)
	{
		buf[--i] = '0' - n % 10;
		n /= 10;
		if (n == 0)
		{
			if (neg == 1)
				buf[--i] = '-';
			return (ft_strdup(buf + i));
		}
	}
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(125));
// 	printf("%s\n", ft_itoa(-125));
// 	printf("%s\n", ft_itoa(-1));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("tosh its bad at code%s\n", ft_itoa(-21473648));
// 	printf("%s\n", ft_itoa(2147483646));
// 	printf("%s\n", ft_itoa(-2147483647));
// }
