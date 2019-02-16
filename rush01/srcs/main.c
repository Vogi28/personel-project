/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:33:38 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 09:44:44 by roduquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

int		main(int ac, char **av)
{
	if (!ft_check_av(av) || ac != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_initialisation(av);
	return (0);
}
