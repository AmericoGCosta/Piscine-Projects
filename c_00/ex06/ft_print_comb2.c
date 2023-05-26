/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:47:48 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/10 11:48:07 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putc(char i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putc('0' + a / 10);
			ft_putc('0' + a % 10);
			ft_putc(' ');
			ft_putc('0' + b / 10);
			ft_putc('0' + b % 10);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
