/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:22:19 by pchenier          #+#    #+#             */
/*   Updated: 2022/01/23 15:01:19 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{	
		write(1, &number, 1);
		number++;
	}
}
