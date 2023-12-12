/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:56:59 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/04 14:42:50 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = temp;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
/*
#include <stdio.h>

int             main(void)
{
        int tab[] = {1, 3, 5, 2, 4, 0};
        int size = 6;

        ft_sort_int_tab(tab, size);
        printf ("%d\n", tab[0]);
        return (0);
}*/
