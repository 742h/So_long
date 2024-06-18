/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:43:26 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/14 18:57:27 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc (count * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero (ptr, count * size);
	return (ptr);
}
// int main()
// {
//     int *ptr;
//     int n = 5;
//  ptr = (int*)ft_calloc(n, sizeof(int));
//  printf ("%d", *ptr);
//  free(ptr);
//  return(0);
// }