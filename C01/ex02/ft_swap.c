/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:26:49 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/03 14:38:19 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;

	a = 1;
	b = 9;
	printf ("a: %d\n", a);
	printf ("b: %d\n", b);
	ft_swap(&a, &b);
	printf ("a: %d\n", a);
	printf ("b: %d\n", b);
	return 0;
}*/
