/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:57:54 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/04 12:32:06 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
#include <stdio.h>

int	main()
{
	int	x;
	int	y;
	
	x = 2;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf ("%d\n", x);
	printf ("%d\n", y);
	return 0;
}*/
