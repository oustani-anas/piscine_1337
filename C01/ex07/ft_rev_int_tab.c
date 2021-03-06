/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:19:58 by aoustani          #+#    #+#             */
/*   Updated: 2021/09/29 18:17:40 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		s;

	s = size - 1;
	i = 0;
	while (i < s)
	{
		temp = tab[i];
		tab[i] = tab[s];
		tab[s] = temp;
		i++;
		s--;
	}
}
