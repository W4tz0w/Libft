/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daddy_cool <daddy_cool@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:35:47 by daddy_cool        #+#    #+#             */
/*   Updated: 2022/12/23 18:50:29 by daddy_cool       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	k;

	if (n == 0)
		return ((char *)haystack);
	i = 0;
	k = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		k = 0;
		while (needle[k] == haystack[i + k] && i + k < n)
		{
			if (needle[k + 1] == 0)
				return ((char *)&haystack[i]);
			k++;
		}
		i++;
	}
	return (NULL);
}
