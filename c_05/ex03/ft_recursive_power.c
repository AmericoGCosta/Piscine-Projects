/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:54:27 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/29 13:59:48 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(4, 3));
}
*/
