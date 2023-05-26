/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:15:30 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/24 13:22:47 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 > str[i] || str[i] > 122 || (90 < str[i] && str[i] < 97))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *s = "merico@";
	char *t = "omeunomee[";
	char *u = "'";
	printf("%d\n", ft_str_is_alpha(s));
	printf("%d\n", ft_str_is_alpha(t));
	printf("%d\n", ft_str_is_alpha(u));
	printf("%d\n", ft_str_is_alpha("{"));
	return (0);
}
*/
