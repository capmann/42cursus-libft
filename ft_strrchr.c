/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:21:01 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/24 17:30:06 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, size_t c)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*s1;

	i = ft_strlen(s);
	d = (unsigned char)c;
	s1 = (unsigned char *)s;
	if (d == 0)
		return ((char *)&s1[i]);
	while (i != 0 && s1[i] != d)
		i--;
	if (i == 0 && d == s1[0])
		return ((char *)&s1[0]);
	else if (i == 0 && d != s1[0])
		return (0);
	return ((char *)&s1[i]);
}
