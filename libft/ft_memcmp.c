/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:04:46 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/10 05:59:52 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		while (a1[i] != a2[i])
		{
			if (a1[i] > a2[i])
			{
				return (a1[i] - a2[i]);
			}
			else if (a1[i] < a2[i])
			{
				return (a1[i] - a2[i]);
			}
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	*s1 = "H3llo";
// 	char	*s2 = "H3llz";
// 	printf("%d\n", ft_memcmp(s1,s2,5));
// 	char	*l1 = "H3llo";
// 	char	*l2 = "H3llz";
// 	printf("%d", memcmp(l1,l2,5));
// }