/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daddy_cool <daddy_cool@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:38:16 by daddy_cool        #+#    #+#             */
/*   Updated: 2022/12/23 18:50:09 by daddy_cool       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main()
// {
// 	char const	*s = "wrdfghjGHJK";
// 	printf("%s\n", ft_strmapi(s, &ft_toupper));
// }

// int	main (void)
// {
// 	const char *s = "ta mère en slip de guerre %57(7)_-";
// 	printf("%s\n", ft_strmapi(s, &ft_toupper));
// 	return (0);
// }
