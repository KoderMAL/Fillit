/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 13:58:07 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/28 17:10:01 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_convert_to_nb(char *ttris)
{
	int	nb;
	int	i;
	int	j;

	i = 0;
	nb = 0;
	j = 0;
	while (ttris[i] && j < 16)
	{
		if (ttris[i] != '\n')
		{
			nb *= 2;
			j++;
		}
		if (ttris[i] == '#')
			nb++;
		i++;
	}
	return (nb);
}

int		ft_simplify_tmino(int nb)
{
	if (nb == 0)
		return (0);
	while (!(nb & 15))
	{
		nb /= 2;
	}
	while (ft_is_noncontiguous(nb))
	{
		nb /= 2;
	}
	while (!(nb & 4369))
	{
		nb /= 2;
	}
	return (nb);
}

int		ft_is_noncontiguous(int nb)
{
	int	non_contiguous;
	int	tmp;

	non_contiguous = 0;
	tmp = nb >> 3;
	while (tmp)
	{
		if ((tmp & 3) == 3)
			non_contiguous = 1;
		tmp = tmp >> 4;
	}
	return (non_contiguous);
}

int		ft_nb_tminos(char **ttristab)
{
	int i;

	i = 0;
	if (ttristab == NULL)
		return (0);
	else
		while (ttristab[i])
			i++;
	return (i);
}

int		ft_uppersqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i = i + 1;
	if (i * i >= nb)
		return (i);
	else
		return (0);
}
