/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:22:20 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/11 15:54:57 by ojastrze         ###   ########.fr       */
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

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	j = 1;
	k = 1;
	while (j < argc - 1)
	{
		i = 0;
		if (argv[j][i] == argv[j + 1][i])
		{
			while ((argv[j][i] || argv[j + 1][i])
					&& (argv[j][i] == argv[j + 1][i]))
				i++;
		}
		if (argv[j][i] > argv[j + 1][i])
		{
			ft_swap (&argv[j], &argv[j + 1]);
			j = 0;
		}
		j++;
		while (argc > 0 && argv[k])
		{
			ft_putstr (argv[k]);
			ft_putchar ('\n');
			k++;
		}
	}
	return (0);
}
