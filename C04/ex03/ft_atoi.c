/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:15:20 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/07 14:32:54 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int resultat;
	int sign;

	resultat = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ( *str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + *str - '0';
		str++;
	}
	return (resultat * sign);	
}
