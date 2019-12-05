/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:37:05 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 19:29:25 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;

	if (lst == NULL)
		return (0);
	size = 1;
	while (lst->next)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
