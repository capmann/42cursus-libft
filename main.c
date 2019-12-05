/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:50:34 by cmarteau          #+#    #+#             */
/*   Updated: 2019/12/04 21:57:55 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	ft_putendl_fd(ft_strjoin(ft_itoa(ft_atoi(argv[1])), ft_itoa(argc)), 1);
	char **tab = ft_split(argv[2], argv[3][0]);
	ft_putstr_fd(ft_strjoin(tab[0], tab[2]), 1);
	return (0);
}
