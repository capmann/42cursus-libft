/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:36:56 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/20 22:00:54 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*memory;
	unsigned int	i;
	unsigned int	len_s1;

	i = 0;
	len_s1 = ft_strlen(s1);
	if (!(memory = malloc(sizeof(char) * (len_s1 + 1))))
		return (0);
	while (s1[i])
	{
		memory[i] = s1[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
