/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:37:09 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/10 06:36:17 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*l;
	size_t			i;

	l = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		l[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char buffer[14];
// 	// char *buffer1;
// 	// memset(buffer1, 't' , 4);
// 	ft_memset(buffer, 't', 5);
// 	// size_t size = 5;
// 	printf("%s", buffer);
// }