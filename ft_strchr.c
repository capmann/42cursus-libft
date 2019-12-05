/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:52:50 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/24 17:29:21 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	d;

	i = 0;
	d = (unsigned char)c;
	while (s[i] != d && s[i])
		i++;
	if (s[i] == 0 && d != 0)
		return (0);
	return ((char *)&s[i]);
}
