/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:30:35 by pchenier          #+#    #+#             */
/*   Updated: 2022/01/31 16:55:18 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	hold;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size / 2)
	{
		hold = tab[i];
		tab[i] = tab[size - j];
		tab[size - j] = hold;
		i++;
		j++;
	}
}
