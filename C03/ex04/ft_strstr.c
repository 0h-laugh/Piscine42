/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojastrze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:58:52 by ojastrze          #+#    #+#             */
/*   Updated: 2023/12/06 15:25:39 by ojastrze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (!*to_find)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			while (to_find[i] && str[i] == to_find[i])
			{
				i++;
			}
			if (!to_find[i])
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char a[] = "aaaatestaaaa";
	char b[] = "test";
	printf("%s", ft_strstr (a, b));
	return (0);
}*/
