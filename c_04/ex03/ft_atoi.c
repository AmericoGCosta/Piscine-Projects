/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:14:52 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/29 11:24:59 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (s * r);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("+42"));
	printf("%d\n", ft_atoi("          -+---++-+23523u4"));
	printf("%d\n", ft_atoi("  --4a42"));
	printf("%d\n", ft_atoi("aa42"));
}
*/
