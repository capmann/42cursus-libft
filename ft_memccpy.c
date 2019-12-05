/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:36:01 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/20 22:30:59 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
			return (&dst1[i + 1]);
		i++;
	}
	return (0);
}
