/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:29:52 by seolee            #+#    #+#             */
/*   Updated: 2024/10/15 17:17:35 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*value;
	t_list	*temp;

	value = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst -> content));
		if (temp == NULL)
		{
			ft_lstclear(&value, del);
			return (NULL);
		}
		ft_lstadd_back(&value, temp);
		lst = lst -> next;
	}
	return (value);
}		
