/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:36:08 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/17 06:47:17 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while ((b1[i] != '\0' || b2[i] != '\0') && i < n)
	{
		if (b1[i] > b2[i])
		{
			return (1);
		}
		else if (b2[i] > b1[i])
		{
			return (-1);
		}
		else
			i++;
	}
	return (0);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_strncmp("©", "well", 2));
// 	printf("%d", strncmp("©","well", 2));
// }