/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:25:20 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/05 20:48:22 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countletters(int i)
{
	unsigned int	k;

	k = 0;
	if (i < 0)
		k = 1;
	while (i != 0)
	{
		i = i / 10;
		k++;
	}
	return (k);
}

static char	*ft_zero(void)
{
	char *dest;

	if (!(dest = malloc(sizeof(char) * 2)))
		return (0);
	dest[0] = 48;
	dest[1] = '\0';
	return (dest);
}

char		*ft_itoa(int n)
{
	char			*mem;
	unsigned int	i;
	long			m;

	m = n;
	i = ft_countletters(n);
	if (m == 0 || m == -0)
		return (ft_zero());
	if (!(mem = malloc(sizeof(char) * (i + 1))))
		return (0);
	if (m < 0)
	{
		m = -m;
		mem[0] = '-';
	}
	mem[i] = '\0';
	while (m != 0 && i--)
	{
		mem[i] = m % 10 + 48;
		m = m / 10;
	}
	return (mem);
}
