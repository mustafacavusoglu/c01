/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:08:30 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/15 15:14:09 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	index;

	index = 0;
	while (index < size)
	{
		while (tab[index] > tab[index + 1])
		{
			swap = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = swap;
			index = 0;
		}
		i++;
	}
}
