/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:35:39 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 19:59:02 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(const char *set, char c)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned char	*mem;
	unsigned int	len;

	i = 0;
	if (!s1)
		return (0);
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_search(set, s1[i]) == 1)
		i++;
	if (s1[i] == '\0')
	{
		if (!(mem = malloc(1)))
			return (0);
		mem[0] = '\0';
		return ((char *)mem);
	}
	while (len != i && ft_search(set, s1[len]) == 1)
		len--;
	return (ft_substr(s1, i, len + 1 - i));
}
