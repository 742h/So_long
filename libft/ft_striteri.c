/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:01:36 by hassaleh          #+#    #+#             */
/*   Updated: 2024/01/15 22:52:25 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void myFunction(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c - 32;
// 	}
// }

// int main()
// {
// 	char	l[] = "Hello";
// 	ft_striteri(l, myFunction);
// 	printf ("%s", l);
// }