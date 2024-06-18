/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:09:59 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/03 20:34:50 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

int	word_count(const char *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i] != '\0'))
		{
			w++;
			while ((s[i] != c) && (s[i] != '\0'))
				i++;
		}
		else
			i++;
	}
	return (w);
}

void	*free_mem(char **str, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free (str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

char	**make_word(char **str, const char *s, char c, int words)
{
	int	i;
	int	j;

	i = 0;
	while (words > 0)
	{
		while (*s && *s == c)
			s++;
		j = char_count (s, c);
		str[i] = malloc (sizeof (char) * (j + 1));
		if (!str[i])
			free_mem(str, i);
		j = 0;
		while (*s && *s != c)
		{
			str[i][j] = *s;
			s++;
			j++;
		}
		str[i][j] = '\0';
		i++;
		words--;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	words = word_count(s, c);
	if (!s)
		return (NULL);
	str = malloc(sizeof (char *) * (words + 1));
	if (!str)
	{
		return (NULL);
	}
	make_word(str, s, c, words);
	return (str);
}

// int main() {
//     const char *input_string = "Hellodsadsad,World,How,Are,You";
//     char delimiter = ',';

//     char **result = ft_split(input_string, delimiter);

//     for (int i = 0; result[i]; i++) {
//         printf("{%s}\n", result[i]);
//     }

//     for (int i = 0; result[i] != NULL; i++) {
//         free(result[i]);
//     }
//     free(result);

//     return 0;
// }
