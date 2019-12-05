/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:32:45 by cmarteau          #+#    #+#             */
/*   Updated: 2019/11/24 17:22:20 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;
	unsigned int	i;

	i = 0;
	if (!(memory = malloc(count * size)))
		return (0);
	while (i < (count * size) && size != 0)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
