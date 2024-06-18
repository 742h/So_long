/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:34:11 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/16 22:28:39 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char str[10];
// 	char str2[10];
// 	printf("%lu\n", ft_strlcpy(str, "Hell334o", 4));
// 	printf("%lu\n", strlcpy(str2, "Hell334o", 4));
// }