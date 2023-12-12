/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:55:11 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/11 15:20:00 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar (*str);
		str++;
	}
}

int     main(int argc, char **argv)
{
        int     i;

	i = argc -1;
	while (i > 0)
	{
		ft_putstr (argv[i]);
		ft_putchar ('\n');
		i--;
	}
	return (0);
}
