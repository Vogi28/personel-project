/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:43:42 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 14:42:10 by roduquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_initialisation(char **av)
{
	int *tab;
	int *soluce;
	int *ordre;
	int i;

	i = 0;
	if (!(tab = (int*)malloc(sizeof(int) * 81)))
		return ;
	if (!(soluce = (int*)malloc(sizeof(int) * 81)))
		return ;
	if (!(ordre = (int*)malloc(sizeof(int) * 82)))
		return ;
	ft_remplissage(av, tab);
	ft_check_soluce(tab, soluce);
	ft_ordon_soluce(soluce, ordre);
	i = solveur_sudoku(ordre, tab, soluce, 0);
	if (i == 1)
		i += solveur_sudoku(ordre, tab, soluce, find_last(ordre));
	free(tab);
	free(ordre);
	if (i == 1)
		ft_affich_soluc(soluce);
	else
		write(1, "Error\n", 6);
	free(soluce);
}

void	ft_remplissage(char **av, int *tab)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '.')
				tab[k] = 0;
			else
				tab[k] = av[i][j] - '0';
			j++;
			k++;
		}
		i++;
	}
}
