/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 21:48:31 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 19:30:29 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	if (!(lst = malloc(sizeof(t_list))))
		return (0);
	if (content == NULL)
	{
		lst->content = NULL;
	}
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
