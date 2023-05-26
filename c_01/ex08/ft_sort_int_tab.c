/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:49:04 by amgoncal          #+#    #+#             */
/*   Updated: 2023/03/14 18:49:08 by amgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	m;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if(tab[j] < tab[i])
			{
				m = tab[i];
				tab[i] = tab[j];
				tab [j] = m;
			}
			j++;
		}
	i++;
	}
}

/*int	main(void)
{
	int	tab[6] = {4, 7, 1, 5, 2, 8};
	int	size;
	int	i;

	i = 0;
	size = 6;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
