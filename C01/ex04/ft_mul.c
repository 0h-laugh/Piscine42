/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:17:03 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/03 14:17:44 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_mul(int *ptr, int number)
{
	int	res;

	res = *ptr;
	res = res * number;
	*ptr = res;
}
/*
#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 3;
    int *ptr = &num1;
    printf("Before multiplication: *ptr = %d, number = %d\n", *ptr, num2);
    ft_mul(ptr, num2);
    printf("After multiplication: *ptr = %d\n", *ptr);
    return 0;
}*/
