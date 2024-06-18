/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:26:48 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/14 03:58:11 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc (sizeof(t_list));
	if (!node)
		return (NULL);
	node ->content = content;
	node ->next = NULL;
	return (node);
}

// int main()
// {
//     int data = 50;
//     t_list *newNode = ft_lstnew(&data);
// 	printf ("%p", newNode->content);
// }
