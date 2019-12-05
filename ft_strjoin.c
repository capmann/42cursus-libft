/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:11:30 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 19:49:21 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*mem;
	unsigned int	len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(mem = malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_strlcpy(mem, s1, (ft_strlen(mem) + ft_strlen(s1) + 1));
	ft_strlcat(mem, s2, (ft_strlen(mem) + ft_strlen(s2) + 1));
	return (mem);
}
