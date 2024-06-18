/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:24 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/10 19:15:06 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char dst[10] = "";
// 	char src[10] = "Hello";
// 	printf ("%s\n", memcpy(dst,src,3));
// 	//////////////////////////////////
// 	char dst2[10] = "HELLoooo";
// 	char src2[10] = "Hello";
// 	printf ("%s", ft_memcpy(dst2,src2,3));
// }

//Example about Overlapping \/ ||
//  int main()
//  {
// 	char str[] = "ABCDEF";
// 	printf ("%s", ft_memcpy(&str[2], &str, sizeof(str) + 1));
//  }

