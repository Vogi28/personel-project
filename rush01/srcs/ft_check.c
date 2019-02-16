/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:25:05 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 14:47:32 by roduquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_av(char **tab)
{
	int i;
	int j;

	i = 1;
	if (tab[10])
		return (0);
	while (tab[i])
	{
		j = 0;
		if (tab[i][9])
			return (0);
		while (tab[i][j])
		{
			if (((tab[i][j] > '9' || tab[i][j] <= '0') && tab[i][j] != '.')
					|| j == 9)
				return (0);
			j++;
		}
		if (j > 9)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check(int *tab, int x)
{
	int i;

	i = x / 9 * 9;
	while (i < x / 9 * 9 + 9)
	{
		if (tab[i] == tab[x] && i != x)
			return (0);
		i++;
	}
	i = x % 9;
	while (i < 81)
	{
		if (tab[i] == tab[x] && i != x)
			return (0);
		i += 9;
	}
	return (ft_check_square(tab, x));
}

int		ft_check_square(int *tab, int x)
{
	int j;
	int i;

	j = 0;
	i = (x / 9) / 3 * 3 * 9 + x % 9 / 3 * 3;
	while (j < 21)
	{
		if (tab[i + j] == tab[x] && i + j != x)
			return (0);
		if (j % 3 == 2)
			j = j - 2 + 9;
		else
			j++;
	}
	return (1);
}

int		find_last(int *ordre)
{
	int i;

	i = 0;
	while (ordre[i] != -1)
		i++;
	return (i - 1);
}
