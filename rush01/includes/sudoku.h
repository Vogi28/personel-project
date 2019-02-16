/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roduquen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 09:24:08 by roduquen          #+#    #+#             */
/*   Updated: 2019/02/16 14:43:04 by roduquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

int		ft_check_av(char **tab);
int		ft_check(int *tab, int x);
int		ft_check_square(int *tab, int x);
void	ft_check_soluce(int *tab, int *soluce);
void	ft_ordon_soluce(int *soluce, int *ordre);
void	ft_initialisation(char **av);
void	ft_remplissage(char **av, int *tab);
int		solveur_sudoku(int *ordre, int *tab, int *soluce, int j);
void	ft_soluce(int *tab, int *soluce);
void	ft_affich_soluc(int *soluce);
int		find_last(int *ordre);
void	ft_putchar(char c);

#endif
