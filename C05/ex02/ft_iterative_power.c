/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:27:44 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/08 09:36:55 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	while (power >= 1)
	{
			result *= nb;
			--power;
	}
	return (result);
}
