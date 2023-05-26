/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:04:18 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/29 12:09:27 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (n);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
