/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:20:35 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/09 21:37:25 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*j;
	size_t			i;

	j = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		j[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char s[6];
// 	size_t n = 4;
// 	ft_bzero(s,n);
// 	printf ("%s", s);
// }
