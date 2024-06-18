/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:33:55 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/22 21:08:42 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	k;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	j = len;
	k = 0;
	while (i < j && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	str = (char *)malloc (sizeof(char) * (j - i + 1));
	if (!str || (!s1 || !set))
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

// int main()
// {
// 	char a[] = "Hello World Hello";
// 	char b[] = "Hewo";
// 	char *result = ft_strtrim(a, b);
// 	printf ("%s", result);
// 	free (result);
// }