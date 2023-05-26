/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:11:22 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/26 16:16:19 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char	*t = "FourtyTwo";
	char	*m = "Just keep swimming";
	char	*n = "";
	printf("%d\n", ft_str_is_lowercase(s));
	printf("%d\n", ft_str_is_lowercase(t));
	printf("%d\n", ft_str_is_lowercase(m));
	printf("%d\n", ft_str_is_lowercase(n));
	return (0);
}
*/
