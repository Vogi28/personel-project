/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolv_sudoku.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:31:35 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 14:49:59 by roduquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		solveur_sudoku(int *ordre, int *tab, int *soluce, int j)
{
	while (ordre[j] != -1 && j >= 0)
	{
		if (tab[ordre[j]] == 0)
			tab[ordre[j]] = 1;
		if (tab[ordre[j]] > 9)
		{
			tab[ordre[j]] = 0;
			j--;
			if (j >= 0)
				tab[ordre[j]] += 1;
		}
		else if (!ft_check(tab, ordre[j]))
			tab[ordre[j]]++;
		else if (ordre[j + 1] != -1)
			j++;
		else
		{
			ft_soluce(tab, soluce);
			tab[ordre[j]]++;
			return (1);
		}
	}
	return (0);
}

void	ft_soluce(int *tab, int *soluce)
{
	int i;

	i = 0;
	while (i < 81)
	{
		soluce[i] = tab[i];
		i++;
	}
}
