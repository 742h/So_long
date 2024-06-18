/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:45:53 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/09 21:49:34 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	sign_handling(char	*str, int n, int sign, int *i)
{
	if (sign == -1)
	{
		str[0] = '-';
	}
	str[*i] = '\0';
	if (n == 0)
	{
		(*i)--;
		str[*i] = '0';
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	i = count_digit(n);
	if (n < 0)
	{
		sign = sign * -1;
		n = -n;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	sign_handling(str, n, sign, &i);
	while (n != 0)
	{
		i--;
		str[i] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
