/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:40:45 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/11 20:03:51 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	h;
	size_t			needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)(haystack));
	if (!len)
		return (NULL);
	while (haystack[i] && i < len)
	{
		h = 0;
		while (needle[h] && needle[h] == haystack[i + h] && (i + h) < len)
			h++;
		if (needle_len == h)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	// i = 0
// 	// "Hello world" -> haystack
// 	// h = 0
// 	// "world" -> needle
// 	printf("%s\n", ft_strnstr("Hello World", "l", 4));
// 	printf("%s", strnstr("Hello World", "l", 4));
// 	return(0);
// }