/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:05:51 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/27 17:13:25 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "aaabbbccc";
	s2 = "aaabbbccc";
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
*/
