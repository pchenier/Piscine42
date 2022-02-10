/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:29:23 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/06 20:36:07 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int mien;
	int leleur;

	if (ac == 2)
	{
		mien = ft_atoi(av[1]);
		leleur = ft_atoi(av[1]);
		printf("mien: %d | leleur: %d\n", mien, leleur);
	}
	return (0);
}
