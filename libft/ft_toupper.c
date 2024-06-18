/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:09 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/06 21:26:48 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int u)
{
	while (u >= 'a' && u <= 'z')
	{
		u = u - 32;
	}
	return (u);
}

// #include <stdio.h>
// int main(void)
// {
//     char u;
//     u = 'h';
//     printf("%c\n", ft_toupper(u));
//     u = 'a';
//     printf("%c\n", ft_toupper(u));
//     u = '0';
//     printf("%c", ft_toupper(u));
// }