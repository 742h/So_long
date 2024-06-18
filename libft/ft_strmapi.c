/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:56:15 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/29 19:48:49 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cpy;
	int		i;

	if (!s || !f)
		return (ft_strdup(""));
	cpy = ft_strdup(s);
	if (!cpy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = f(i, s[i]);
		i++;
	}
	return (cpy);
}

// int main()
// {
// 	char a[] = "Hello";
// 	char b =('5', a);
// 	printf ("%s", ft_strmapi(a,b));
// }