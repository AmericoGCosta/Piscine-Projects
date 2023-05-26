/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:15:38 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/27 15:29:08 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (!(str[i - 1] >= 97 && str[i - 1] <= 122))
			{
				if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
				{
					if (!(str[i - 1] <= 90 && str[i - 1] >= 65))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "ugig ig iug  iygiy 5435ihohHHH JJJJJ ==AAA=aaa";
	printf("%s\n", s);
	ft_strcapitalize(s);
	printf("%s", s);
	return (0);
}
*/
