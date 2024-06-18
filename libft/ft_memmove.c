/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:24:05 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/10 06:42:31 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while ((s || d) && len > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

//  int main()
//  {
// 	char str[] = "Hello";
// 	char dst[] = "H";
// 	printf ("%s", ft_memmove(dst, str, 2));
//  }