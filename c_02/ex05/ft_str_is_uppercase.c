/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:51:50 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/26 17:53:32 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char	*s = "merico";
	char	*t = "FOURTYTWO";
	char	*m = "JUSTKEEP SWIMMING";
	char	*n = "";
	printf("%d\n", ft_str_is_uppercase(s));
	printf("%d\n", ft_str_is_uppercase(t));
	printf("%d\n", ft_str_is_uppercase(m));
	printf("%d\n", ft_str_is_uppercase(n));
	return (0);
}
*/
