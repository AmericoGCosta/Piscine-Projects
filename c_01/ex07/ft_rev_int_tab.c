/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:17:35 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/14 16:24:18 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	m;

	i = 0;
	while (i < (size / 2))
	{
		m = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = m;
		i++;
	}
}

/*int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6};
	int	size = 6;
	int	i = 0;
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
