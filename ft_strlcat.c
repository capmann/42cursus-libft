/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:09:48 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/25 19:57:42 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int j;
	unsigned int len_src;
	unsigned int len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0 || len_dst >= dstsize)
		return (len_src + dstsize);
	while (dst[i])
		i++;
	while (src[j] && j < dstsize - len_dst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_src + len_dst);
}
