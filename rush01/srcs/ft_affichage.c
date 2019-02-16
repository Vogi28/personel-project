/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affichage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 09:31:36 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 11:06:52 by roduquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_affich_soluc(int *soluce)
{
	int i;

	i = 0;
	while (i < 81)
	{
		ft_putchar(soluce[i] + '0');
		if (i % 9 == 8)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}
