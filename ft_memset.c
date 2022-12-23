/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daddy_cool <daddy_cool@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:33:31 by daddy_cool        #+#    #+#             */
/*   Updated: 2022/12/23 18:48:13 by daddy_cool       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	char		*destcast;
	size_t		i;

	i = 0;
	destcast = (char *)dest;
	while (i < len)
	{
		destcast[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
