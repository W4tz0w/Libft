/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daddy_cool <daddy_cool@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:18:09 by daddy_cool        #+#    #+#             */
/*   Updated: 2022/12/23 18:49:42 by daddy_cool       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	if (dstsize == 0)
		return (0);
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (dest_size >= dstsize)
		return (dstsize + src_size);
	while (src[i] != '\0' && i < (dstsize - dest_size - 1))
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (dest_size + src_size);
}
