/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:13:58 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/29 12:14:17 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	else if (nb > 0)
	{
		n = ft_recursive_factorial(nb - 1);
		n *= nb;
		nb--;
	}
	else
		return (1);
	return (n);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
*/
