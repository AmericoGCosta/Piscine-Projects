/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:14:06 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/27 17:33:04 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "olateste";
	s2 = "olatesTe";
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s2, 8));
}
*/
