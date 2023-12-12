/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:49:23 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/06 19:57:16 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && *s1 && (*s1 == *s2))
	{
		i++;
		s1++;
		s2++;
	}
	if (i < n)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "abC";
	char s2[] = "abc";
	unsigned int n = 3;
	printf ("%d", ft_strncmp(s1, s2, n));
	return 0;
}*/
