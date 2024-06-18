/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:17:33 by hassaleh          #+#    #+#             */
/*   Updated: 2024/05/21 18:46:18 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;
		if (!str)
			return(0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return ((size_t)i);
}

// #include<stdio.h>
// int main()
// {
// 	const char string[] = "Hello";
// 	printf("%zu",ft_strlen(string));
// }