/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:24:57 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/08 15:27:40 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	nbr;

	nbr = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		nbr *= nb * ft_recursive_factorial(nb - 1);
	return (nbr);
}
