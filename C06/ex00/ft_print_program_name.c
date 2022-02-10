/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:31:23 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/08 16:08:46 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	write(1, argv[0], sizeof(argv[0]));
	write(1, "\n", 1);
	return (0);
}
