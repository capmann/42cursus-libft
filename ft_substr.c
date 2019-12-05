/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:41:32 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 19:59:56 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*memory;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		if (!(memory = malloc(1)))
			return (0);
		memory[0] = 0;
		return (memory);
	}
	if (!(memory = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (len-- > 0)
	{
		memory[i] = s[i + start];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
