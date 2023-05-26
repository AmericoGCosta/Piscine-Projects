/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:11:36 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/27 19:17:20 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			c = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					c = 1;
				i++;
			}
			if (c == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "I'm into norminette";
	to_find = "iinto";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	write (1, "\n", 1);
	to_find = "";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	write (1, "\n", 1);
	to_find = "normi";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	write (1, "\n", 1);
	to_find = " i";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	write (1, "\n", 1);
	to_find = "tt";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}
*/
