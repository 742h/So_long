/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:50:46 by hassaleh          #+#    #+#             */
/*   Updated: 2024/05/21 18:46:40 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	i = 0;
	while (i < dstsize && d[i] != '\0')
	{
		i++;
	}
	j = dstsize - i;
	if (j == 0)
	{
		return (i + ft_strlen((const char *)s));
	}
	while (j > 1 && *s != '\0')
	{
		d[i++] = *s++;
		j--;
	}
	d[i] = '\0';
	return (i + ft_strlen((const char *)s));
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[27] = "Hello!";
// 	char src[] = "lohhhl";
// 	printf ("%lu", ft_strlcat(dest, src, 10));
// 	char cat[27] = "Hello!";
// 	char boo[] = "lohhhl";
// 	printf("\n%lu", strlcat(cat, boo, 10));
// }