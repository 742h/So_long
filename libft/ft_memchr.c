/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:18:30 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/29 14:47:07 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;

	v = (unsigned char *)s;
	while (n -- > 0)
	{
		if (*v == (unsigned char )c)
			return ((char *)v);
		v++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char	*s = "He11llo";////////////
// 	int	c = 'l';///////////////////////
// 	int	n = 5;
// 	printf ("%s\n", ft_memchr(s,c,n));
// ///////////////////////////////////////
// 	char	*s1 = "He11llo";
// 	int	c1 = 'l';
// 	int	n1 = 5;
// 	printf ("%s\n", memchr(s1,c1,n1));
// ///////////////////////////////////////
// 	char	*s3 = "He11llo";
// 	int	c3 = 'l';
// 	int	n3 = 4;
// 	printf ("%s\n", ft_memchr(s3,c3,n3));
// ///////////////////////////////////////
// 	char	*s4 = "He11llo";
// 	int	c4 = 'l';
// 	int	n4 = 4;
// 	printf ("%s", memchr(s4,c4,n4));
// }