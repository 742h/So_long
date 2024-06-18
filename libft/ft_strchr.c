/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:32:37 by hassaleh          #+#    #+#             */
/*   Updated: 2024/04/21 21:59:21 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	while (*str)
	{
		if (*str == (char)a)
			return ((char *)str);
		str++;
	}
	if (*str == (char)a)
		return ((char *)str);
	return (0);
}

// int main(void)
// {
//     char a;
//     a = 'l';
//     char *str = "hello\0\0bye";
// 	printf("%s\n", ft_strchr(str, a));
// 	printf("%s\n", strchr(str,a));
// 	printf("%d\n", 'e' + 256);
//     printf("%s\n", ft_strchr("teste", 'e' + 256));
// 	printf("%s", strchr("teste", 'e' + 256));
//     return(0);
// }
