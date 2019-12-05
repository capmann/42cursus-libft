/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:55:22 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/24 17:28:02 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n && &src[0] >= &dst[0])
	{
		dst1[i] = src1[i];
		i++;
	}
	i = n;
	while (i > 0 && &src[0] < &dst[0])
	{
		dst1[i - 1] = src1[i - 1];
		i--;
	}
	return (dst);
}
