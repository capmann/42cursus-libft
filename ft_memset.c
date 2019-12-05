/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:21:18 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/24 17:27:33 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*d;

	i = 0;
	a = (unsigned char)c;
	d = (unsigned char *)b;
	while (i < len)
	{
		d[i] = a;
		i++;
	}
	return (b);
}
