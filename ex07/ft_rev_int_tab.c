/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:50:20 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/15 14:55:23 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	r_index;
	int	swap;

	index = 0;
	r_index = size - 1;
	while (index < (size / 2))
	{
		swap = tab[index];
		tab[index] = tab[r_index];
		tab[r_index] = swap;
		index++;
		r_index--;
	}
}
