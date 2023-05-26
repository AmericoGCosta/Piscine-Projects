/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:00:40 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/26 18:17:08 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31) || (str[i] == 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	s[] = "€";
	char	t = '\n';
	char	m = 127;

	printf("%d\n", ft_str_is_printable(s));
	printf("%d\n", ft_str_is_printable(&t));
	printf("%d\n", ft_str_is_printable(&m));
	return (0);
}
*/
