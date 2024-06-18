/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:12:05 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/06 21:26:42 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int l)
{
	while (l >= 'A' && l <= 'Z')
	{
		l = l + 32;
	}
	return (l);
}

// #include<stdio.h>
// int main(void)
// {
//     char i;
//     i = 'A';
//     printf("%c\n", ft_tolower(i));
//     i = 'a';
//     printf("%c", ft_tolower(i));
// }