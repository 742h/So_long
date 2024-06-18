/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:27:36 by hassaleh          #+#    #+#             */
/*   Updated: 2024/04/28 15:27:46 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_front(&list, ft_listnew("node3"));
// 	ft_lstadd_front(&list, ft_listnew("node2"));
// 	ft_lstadd_front(&list, ft_listnew("node1"));
	
// 	t_list * current = list;
// 	while (current != NULL)
// 	{
// 		printf ("%s\n", (char *)current -> content);
// 		current = current -> next;
// 	}
// 	while (list != NULL)
// 	{
// 		t_list *tmp = list;
// 		list = list -> next;
// 	}
// }
