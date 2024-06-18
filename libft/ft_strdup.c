/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:50:57 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/28 22:39:39 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int				i;
	int				j;
	char			*dest;
	unsigned char	*s1;

	s1 = (unsigned char *) src;
	j = 0;
	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * i +1);
	if (!(dest))
		return (0);
	while (s1[j] != '\0')
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int main(int argc, char **argv)
// {
// 	char *m;
// 	char *t;
// 	if (argc == 2)
// 	{
// 		m = ft_strdup(argv[1]);
// 		t = strdup(argv[1]);
// 		printf (":%s:\n:%s:\n", m, t);
// 	}
// 	return (0);
// 	free (m);
// 	free (t);
// }