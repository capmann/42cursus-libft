/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:28:58 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 19:24:53 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (*alst == NULL)
		*alst = new;
	else
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	if (new != NULL)
		new->next = NULL;
}
