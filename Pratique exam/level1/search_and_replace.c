/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:06:30 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/10 14:17:37 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][i])
			{
				if ( argv[1][i] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][i], 1);
				i += 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

