/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:42:13 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/26 16:02:19 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
	char	*s = "246457523";
	char	*t = "amer1co";
	char	*m = "";

	printf("%d\n", ft_str_is_numeric(s));
	printf("%d\n", ft_str_is_numeric(t));
	printf("%d\n", ft_str_is_numeric(m));
	return (0);
}
*/
