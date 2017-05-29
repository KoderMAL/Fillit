/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 13:49:12 by alalaoui          #+#    #+#             */
/*   Updated: 2017/05/09 14:09:39 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
#include <stdio.h>
int main(void)
{
	int tab[] = {4, 3, 2, 1};
	int	i = 0;

	sort_int_tab(tab, 5);
	while(i < 4)
	{
		printf("%d,", tab[i]);
			i++;
	}
	return (0);
}
