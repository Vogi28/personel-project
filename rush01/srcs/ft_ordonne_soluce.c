/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ordonne_soluce.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:38:43 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 16:20:53 by vonguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

void	ft_check_soluce(int *tab, int *soluce)
{
	int i;
	int j;

	i = 0;
	while (i < 81)
		soluce[i++] = 0;
	i = 0;
	while (i < 81)
	{
		if (tab[i] == 0)
		{
			soluce[i]++;
			j = 1;
			while (j <= 9)
			{
				tab[i] = j;
				if (ft_check(tab, i))
					soluce[i]++;
				j++;
			}
			tab[i] = 0;
		}
		i++;
	}
	ft_affich_soluc(soluce);
	ft_putchar('\n');
}

void	ft_ordon_soluce(int *soluce, int *ordre)
{
	int i;
	int j;
	int k;

	j = 1;
	k = 0;
	while (k < 81)
		ordre[k++] = 0;
	k = 0;
	while (j <= 10)
	{
		i = 0;
		while (i < 81)
		{
			if (soluce[i] == j)
				ordre[k++] = i;
			i++;
		}
		j++;
	}
	ordre[k] = -1;
	i = 0;
	while (ordre[i])
		printf("%i, ", ordre[i++]);
	ft_putchar('\n');
}
