/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:14:51 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/29 15:41:48 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(10));
}
*/
